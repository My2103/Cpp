//
//  main.cpp
//  merge sort
//
//  Created by Mai Ngoc Diem My on 20/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void displayArray (int arr[MAX], int size);
void merge (int arr[MAX], int leftHalf[MAX], int leftSize, int rightHalf[MAX], int rightSize);
void mergeSort (int arr[MAX], int length);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    displayArray(arr, size);
    
    mergeSort(arr, size);
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

void displayArray (int arr[MAX], int size) {
    cout << "Array elements are: ";
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// display array

void merge (int arr[MAX], int leftHalf[MAX], int leftSize, int rightHalf[MAX], int rightSize) {
    // Create three pointer i, j, k
    int i = 0, j = 0, k = 0;
    
    // Merge two sub-array which were sort
    while (i < leftSize && j < rightSize) {
        if (leftHalf[i] <= rightHalf[j]) {
            arr[k++] = leftHalf[i++];
        } else {
            arr[k++] = rightHalf[j++];
        }
    }
    
    // Copy phan con lai cua leftHalf neu co
    while (i < leftSize) {
        arr[k++] = leftHalf[i++];
    }
    
    // Copy phan con lai cua leftHalf neu co
    while (j < rightSize) {
        arr[k++] = rightHalf[j++];
    }
}// merge function

void mergeSort (int arr[MAX], int length) {
    if (length <= 1) {
        return;
    }
    
    int mid = length/2;
    int* leftHalf = new int[mid];
    int* rightHalf = new int[length - mid];
    
    // Create two sub-array
    for (int i = 0; i < mid; i++) {
        leftHalf[i] = arr[i];
    }
    
    for (int i = mid; i < length; i++) {
        rightHalf[i - mid] = arr[i];
    }
    
    // Recursion to divide function
    mergeSort (leftHalf, mid);
    mergeSort(rightHalf, length - mid);
    
    // Call merge function to merge sub array
    merge(arr, leftHalf, mid, rightHalf, length - mid);
    
    delete[] leftHalf;
    delete[] rightHalf;
}// merge sort function
