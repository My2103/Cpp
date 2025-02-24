//
//  main.cpp
//  heap sort
//
//  Created by Mai Ngoc Diem My on 24/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void displayArray (int arr[MAX], int size);
void swap (int &a, int &b);
void heapify (int arr[MAX], int size, int i);
void heapSort (int arr[MAX], int size);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
           
    getArray(arr, size);
    displayArray(arr, size);
    
    heapSort(arr, size);
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

void swap (int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}// swap function

void heapify (int arr[MAX], int size, int i) {
    // Find the largest among root, left child and rigth child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }
    
    // Swap and contibue heapifying if root is not largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}// heapify function

void heapSort (int arr[MAX], int size) {
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    
    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}
