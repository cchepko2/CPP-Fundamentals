#include <iostream>

// Binary Search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    const int size = 10;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> target;
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        std::cout << "The target " << target << " is found at index " << result << std::endl;
    } else {
        std::cout << "The target " << target << " is not found in the array." << std::endl;
    }
    return 0;
}
