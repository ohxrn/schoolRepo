#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// This struct holds the response data
struct Memory
{
    char *response;
    size_t size;
};

// Callback function to handle the response data
static size_t WriteCallback(void *data, size_t size, size_t nmemb, void *userp)
{
    size_t total_size = size * nmemb;
    struct Memory *mem = (struct Memory *)userp;

    char *ptr = realloc(mem->response, mem->size + total_size + 1);
    if (ptr == NULL)
    {
        printf("Not enough memory (realloc failed)\n");
        return 0;
    }

    mem->response = ptr;
    memcpy(&(mem->response[mem->size]), data, total_size);
    mem->size += total_size;
    mem->response[mem->size] = 0;

    return total_size;
}

int main()
{
    CURL *curl;
    CURLcode res;

    struct Memory chunk = {0};

    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl)
    {
        // Set the URL of the API
        curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/todos/1");

        // Set callback function to handle data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);

        // Pass the struct to the callback function
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);

        // Perform the request
        res = curl_easy_perform(curl);

        // Check if the request was successful
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        else
        {
            // Print the JSON response
            printf("Received JSON data:\n%s\n", chunk.response);
        }

        // Cleanup
        curl_easy_cleanup(curl);
        free(chunk.response);
    }

    curl_global_cleanup();

    return 0;
}
