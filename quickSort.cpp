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
int partition (int arr[MAX], int leftmostIndex, int rightmostIndex);
void quickSort (int arr[MAX], int leftmostIndex, int rightmostIndex);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    displayArray(arr, size);
    
    int leftmostIndex = 0;
    int rightmostIndex = size - 1;
    quickSort(arr, leftmostIndex, rightmostIndex);
    cout << "\nSorted array: " << endl;
    displayArray(arr, size);
    
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

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}// swap function

void displayArray (int arr[MAX], int size) {
    cout << "Array elements are: ";
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// display array

int partition (int arr[MAX], int leftmostIndex, int rightmostIndex) {
    int pivotIndex = arr[rightmostIndex];
    int storeIndex = leftmostIndex - 1;
    
    for (int i = leftmostIndex; i < rightmostIndex; i++) {
        if (arr[i] < pivotIndex) {
            storeIndex++;
            swap(arr[i], arr[storeIndex]);
        }
    }
    
    swap(arr[storeIndex + 1], arr[rightmostIndex]);
    return storeIndex + 1;
}// partition function

void quickSort (int arr[MAX], int leftmostIndex, int rightmostIndex) {
    if (leftmostIndex < rightmostIndex) {
        int pivotIndex = partition (arr, leftmostIndex, rightmostIndex);
        quickSort(arr, leftmostIndex, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, rightmostIndex);
    }
}// function quick sort


