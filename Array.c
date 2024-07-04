#include <stdio.h>

// Function Prototype
// Declares the function 'findInteger' that takes an array of integers, its size,
// and a target integer as arguments. It returns the index of the target integer
// within the array, or -1 if the target is not found.
int findInteger(int arr[], int size, int target);

int main() {
    // Defining an example array of integers.
    int myArray[] = {10, 20, 30, 40, 50};

    // Calculating the size of the array by dividing the total size of the array
    // by the size of one element. This gives us the number of elements in the array.
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Specifying the target integer we're searching for in the array.
    int target = 30;

    // Calling the 'findInteger' function with the array, its size, and the target integer.
    // Storing the returned position in the variable 'position'.
    int position = findInteger(myArray, size, target);

    // Checks if the target integer was found in the array.
    // If 'position' is not -1, it means the target was found, and we print its position.
    // Otherwise, we print a message indicating the target was not found.
    if (position != -1) {
        printf("The integer %d was found at position %d.\n", target, position);
    } else {
        printf("The integer %d was not found in the array.\n", target);
    }

    return 0;
}

// Function Implementation
// Implements the 'findInteger' function.
// Iterates through each element in the array.
// If the current element matches the target, return its index.
// If no match is found after checking all elements, return -1.
int findInteger(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the position if found
        }
    }
    return -1; // Return -1 if not found
}
