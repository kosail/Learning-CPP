#include <iostream>

int main() {
    int array[] = {5, 4, 1, 2, 3, 8, 9, 7};
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Start at 1 because we will be be iterating backwards in the while loop
    for (int i=1; i<arraySize; i++) {
        int key = array[i];
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    // Print the sorted array
    for (int num : array) {
        std::cout << num << " ";
    }

    return 0;
}