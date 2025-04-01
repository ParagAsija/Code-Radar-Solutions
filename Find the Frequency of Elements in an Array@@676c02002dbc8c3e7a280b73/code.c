#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n]; // Array to keep track of visited elements

    // Initialize all elements in the visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Loop through the array
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip already visited elements
        }

        int count = 1; // Start counting frequency for arr[i]

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment the frequency count
                visited[j] = 1; // Mark duplicate elements as visited
            }
        }

        printf("%d %d\n", arr[i], count); // Print element and its frequency
    }
}

int main() {
    int n;

    // printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findFrequency(arr, n);

    return 0;
}
