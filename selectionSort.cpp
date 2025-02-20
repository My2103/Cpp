//
//  main.cpp
//  practice sort
//
//  Created by Mai Ngoc Diem My on 20/2/25.
//

#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void displayArray (int arr[MAX], int size);
void swap (int &a, int &b);
void selectionSort (int arr[MAX], int size);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    displayArray(arr, size);
    
    selectionSort(arr, size);
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

void selectionSort (int arr[MAX], int size) {
    int current_minimum_index;
    for (int i = 0; i < size - 1; i++) {
        // set i as the index of the current minimun
        current_minimum_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[current_minimum_index]) {
                // set j as the index of current minimum index
                current_minimum_index = j;
            }
        }
        if (current_minimum_index != i) {
            swap(arr[i], arr[current_minimum_index]);
        }
    }
}// function selection sort
