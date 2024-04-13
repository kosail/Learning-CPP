#include <iostream>

int main() {
    int myArray[] = {80, 30, 50 ,40, 10, 120, 60, 20, 100, 0};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

        // Iterate through the entire array - 1 (-1 because we are always comparing to the next element, thus if we make the loop to iterate until the actual array size, in the last iteration it will get out of bounds and undefined behaviour)
        for (int i=0; i<arraySize - 1; i++) {
            // Find the index of the minimum element in the unsorted part of the array
            int minimumIndex = i;
            
            for (int j=i; j<arraySize; j++) {
                // Always comparing each j internal iteration to the outer minimum index, which starts in i
                if (myArray[j] < myArray[minimumIndex]) {
                    minimumIndex = j;
                }
            }

            // minimumIndex starts being declared = i. If minimumIndex is now different from i it means that there is, actually, a smallest number that myArray[i], thus, swap the values.
            if (minimumIndex != i) {
                // myArray[i] ^= myArray[minimumIndex];
                // myArray[minimumIndex] ^= myArray[i];
                // myArray[i] ^= myArray[minimumIndex];

                int temp = myArray[i];
                myArray[i] = myArray[minimumIndex];
                myArray[minimumIndex] = temp;
            }

        }

    // Print the sorted array
    for (int num : myArray) {
        std::cout << num << " ";
    }

    return 0;
}