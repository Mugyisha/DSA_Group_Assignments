#include <stdio.h>

// Function to traverse the array
void arrayTraversal(int arr[], int size) {
    for (int a = 0; a < size; a++) {
        printf("Student's Age at index %d: %d\n", a, arr[a]);
    }
}

int main() {
    // Declare and initialize an array
    int age[] = {27, 28, 30, 31, 32};
    int arraySize = sizeof(age) / sizeof(age[0]);

    // Traverse the array
    printf("Traversing the array...\n");
    arrayTraversal(age, arraySize);

    return 0;
}
