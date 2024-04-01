#include <iostream>
#include <cstdlib>
#include <ctime>

// Function prototypes
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);

// Function definitions

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int comparisons = 0;
    int assignments = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            ++comparisons;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ++assignments;
            }
        }
    }
    std::cout << "Bubble Sort Comparisons: " << comparisons << std::endl;
    std::cout << "Bubble Sort Assignments: " << assignments << std::endl;
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int comparisons = 0;
    int assignments = 0;
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            ++comparisons;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        ++assignments;
    }
    std::cout << "Selection Sort Comparisons: " << comparisons << std::endl;
    std::cout << "Selection Sort Assignments: " << assignments << std::endl;
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    int comparisons = 0;
    int assignments = 0;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        ++assignments;
        while (j >= 0 && arr[j] > key) {
            ++comparisons;
            arr[j + 1] = arr[j];
            --j;
            ++assignments;
        }
        arr[j + 1] = key;
        ++assignments;
    }
    std::cout << "Insertion Sort Comparisons: " << comparisons << std::endl;
    std::cout << "Insertion Sort Assignments: " << assignments << std::endl;
}

int main() {
    const int size = 5000;
    int list1[size], list2[size], list3[size];

    // Fill arrays with random numbers
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        list1[i] = rand() % 10000; // Generate random numbers between 0 and 9999
        list2[i] = list1[i];
        list3[i] = list1[i];
    }

    // Sorting and outputting comparisons and assignments
    bubbleSort(list1, size);
    selectionSort(list2, size);
    insertionSort(list3, size);

    return 0;
}
