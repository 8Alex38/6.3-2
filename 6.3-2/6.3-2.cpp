// Рекурсивний спосіб
/*
5
1 2 3 4 5
*/
#include <iostream>

using namespace std;

template<typename T>
T sumArrayRecursive(T arr[], int size, int index = 0) {
    if (index == size) {
        return 0;
    }
    return arr[index] + sumArrayRecursive(arr, size, index + 1);
}

template<typename T>
T findMaxRecursive(T arr[], int size, int index = 0, T max = 0) {
    if (index == size) {
        return max;
    }
    if (arr[index] > max) {
        max = arr[index];
    }
    return findMaxRecursive(arr, size, index + 1, max);
}

void printArrayRecursive(int arr[], int size, int index = 0) {
    if (index == 0) {
        cout << "[";
    }
    cout << arr[index];
    if (index < size - 1) {
        cout << ", ";
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        cout << "]" << endl;
    }
}

void incrementArrayElementsRecursive(int arr[], int size, int index = 0) {
    if (index < size) {
        arr[index] += 1;
        incrementArrayElementsRecursive(arr, size, index + 1);
    }
}

void inputArray(int arr[], int size) {
    cout << "Enter " << size << " = " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void testRecursiveWithTemplates() {
    int size;
    cout << "Enter = ";
    cin >> size;

    int* testArray = new int[size];  

    inputArray(testArray, size);

    cout << "Original = ";
    printArrayRecursive(testArray, size);

    int sum = sumArrayRecursive(testArray, size);
    int max = findMaxRecursive(testArray, size);

    cout << "Sum = " << sum << endl;
    cout << "Max = " << max << endl;

    incrementArrayElementsRecursive(testArray, size);
    cout << "Modified array: ";
    printArrayRecursive(testArray, size);

    delete[] testArray;  
}

int main() {
    testRecursiveWithTemplates();  
    return 0;
}
