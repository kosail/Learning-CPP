#include <iostream>

int main() {
  // 
    int myArray[] = {80, 30, 50 ,40, 10, 120, 60, 20, 100, 0};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    for (int i=0; i<arraySize - 1; i++) {
          for (int j=0;j<arraySize - i - 1; j++) {
                
                if (myArray[j] > myArray[j+1]) {
                    std::swap(myArray[j], myArray[j + 1]);
                  }
            }
      }

    for (auto num : myArray) {
        std::cout << num << " ";
      }

    return 0;
  }
