//
//  main.cpp
//  practice c++ (2)
//
//  Created by Mai Ngoc Diem My on 18/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void displayArray (int arr[MAX], int size);
void insertionSort (int arr[MAX], int size);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    displayArray(arr, size);
    
    insertionSort(arr, size);
    
    return 0;
}// end main

void getArray (int arr[MAX], int &size) {
    cout << "Enter the size for the array: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Index" << "[" << i << "] = ";
        cin >> arr[i];
    }
}// get array

void displayArray (int arr[MAX], int size) {
    cout << "Array elements are: ";
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// display array

void insertionSort (int arr[MAX], int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        
        // Compare key with each element on the left of it until an element smaller tha
        // it is found
        // For descending order, change key<array[j] to key>array[j]
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}// end the insertion sort
