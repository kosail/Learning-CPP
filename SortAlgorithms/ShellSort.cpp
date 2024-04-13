#include <iostream>

int main() {
    int array[] = {5, 4, 1, 2, 3, 8, 9, 7};
    int arraySize = sizeof(array) / sizeof(array[0]);

    /* We will need 3 standard for-loops.
    * 1) The first one will iterate until the gap between each element becomes to 1 (when it becomes 1 it will behave exactly like the Insertion Sort Algorithm, comparing each value to it's left one and swapping them in case the left element is greater than the right one).

    * 2) The second loop will initiate with the value of gap because it will help us to establish the second iterator exactly to be maybe not in the center, but at the exact distance were we can start iterating until the end, without getting out of the bounds of the array. We will compare this iterator with the one that will loop from the beginning until here.
    
    ! 3) The third loop might be confusing, but just keep in mind that it ITERATES BACKWARDS, because it actually behaves like the Insertion Sort Algorithm taking as pivot the j - gap position in the array and jumping backwards gap positions.
    * The thid loop will create an iterator that starts from j - gap instead of 0, because we need the iterator i (the innerest loop) to be decremented gap positions. It should stop when i becomes less than zero, (so, yes, in the firsts j iterations, i will only iterate one time). For example, lets see a random moment during this algorithm:
            when gap = 2 and j = 7
            i will start at 7 - 2 = 5
                5 is >= 0 so it will go ahead and check array[5] > array[5 + 2]
                
                after that iteration it will be i= i-gap, that means i = 5-2 = 3, so it will go ahead and check array[3] > array[3 + 2]
                
                after that iteration it will be i= i-gap, that means i = 3-2 = 1, so it will go ahead and check array[1] > array[1 + 2]

                after that iteration it will be i= i-gap, that means i = 1-2 = -1, so it will stop.
    
    */
    for (int gap=(arraySize/2); gap>=1; gap/=2) {
        for (int j=gap; j<arraySize; j++) {
            for (int i=j - gap; i>=0; i-=gap) {
                if (array[i] > array[i + gap]) {
                    std::swap(array[i], array[i + gap]);
                }
            }
        }
    }

    // Print the sorted array
    for (int num : array) {
        std::cout << num << " ";
    }

    return 0;
}