#include <iostream>

// Function prototype
void insertAt(int arr[], int& size, int insertItem, int index);

// Function definition
void insertAt(int arr[], int& size, int insertItem, int index) {
    if (index < 0 || index > size) {
        std::cout << "Index out of range!" << std::endl;
        return;
    }
    for (int i = size; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = insertItem;
    ++size;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize] = {1, 2, 3, 4, 5};
    int size = 5;

    // Test the insertAt function
    insertAt(arr, size, 10, 2);

    // Output the array after insertion
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
