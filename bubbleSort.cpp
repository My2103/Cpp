//
//  main.cpp
//  practice c++
//
//  Created by Mai Ngoc Diem My on 18/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void displayArray (int arr[MAX], int size);
void swap (int &a, int &b);
void bubbleSort (int arr[MAX], int size);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    displayArray(arr, size);
    
    bubbleSort(arr, size);
    
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

void bubbleSort (int arr[MAX], int size) {
    //Loop to access each array element
    for (int step = 0; step < size - 1; step++) {
        // Lop to compare array element
        for (int i = 0; i < size - step - 1; i++) {
            // compare two adjacent elements
            // change > to < to sort in descending order
            if (arr[i] > arr[i + 1]) {
                // swapping elements if elements
                // are not in the intended order
                swap[arr[i], arr[i + 1]];
            }
        }
    }
}
