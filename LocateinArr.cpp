#include <iostream>
using namespace std;

int findElement(int arr[], int size, int value) {
    // Loop through the array to search for the element
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // If the element is not found, return -1
}

int main() {
    int arr[] = {12, 13, 14, 15, 16};
    
    cout << "Enter the value you want to be located in the Array: ";
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int value;
    cin >> value;
    
    int result = findElement(arr, size, value);
    
    if (result == -1) {
        cout << "Element " << value << " is not found in the array." << endl;
    } else {
        cout << "Element " << value << " is found at index " << result << endl;
    }

    return 0;
}
