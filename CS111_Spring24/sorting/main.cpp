#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std;

struct Student
{
    //put elements in here
    char fname[_MAX_FNAME];
    char lname[_MAX_FNAME];
    int id;
    float grades;
    float average;
};

bool greatness(float a, float b)
{
    //return the thing you want true
    /*if(a>b)
        //return a;
        return true;
    else
        //return b;
        return flase;
        */
    return a>b;
}

bool grades_sort(Student a, Student b)
{
    return a.id<b.id;
}

template<class T>
void bubbleSort(T * array, int size) {
    bool swapped;
    for(int pass=0; pass<size; pass++) {
        swapped = false;
        // let's print array before every pass
        // TODO: comment out the following debugging info...
        //cout << "pass # " << pass << ": ";
        //printArray<T>(array, size);
        for(int i=0; i<size-1-pass; i++) {
            // sort in ascending order; check out of order?
            if (array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
                swapped = true;
            }
        }
        // check if the elements are sorted; i.e. not single pair was swapped
        // let's print array after each pass; uncomment the following statement
        //printArray<T>(array, size);
        if (!swapped)
            break;
    }
}

void printArray(float array[], size_t size)
{
    cout << endl;
    for(size_t i=0;i<size;i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}

int main(void)
{
    float grades[] = {12,0,93,5,67};

    Student Corin = {"Corin", "Chepko", 23252425, 65, 0};
    Student Jill = {"Jill", "Xanders", 077122425, 97, 0};
    Student John = {"John", "Charlies", 8965, 12, 0};

    Student Students[3] = {Corin, Jill, John};

    //bubbleSort<float>(grades, 5);
    //sort(begin(grades), end(grades));
    //sort(&grades[0], &grades[5], greater<float>());
    sort(&grades[0], &grades[5], greatness);
    printArray(grades, 5);

    cout << _MAX_FNAME << endl;

    cout << "\n\n";

    cout << Corin.fname << endl;

    cout << Students[0].id << endl;

    sort(&Students[0], &Students[3], grades_sort);

    cout << Students[0].id << endl;


    return 0;
}