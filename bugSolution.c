#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)malloc(5 * sizeof(int));

    //Check if malloc was successful
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Indicate an error
    }

    memcpy(ptr, arr, 5 * sizeof(int));

    // ... use ptr ...

    free(ptr);
    return 0;
}