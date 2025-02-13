//
//  main.cpp
//  Recursion practice
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void printArray (int arr[], int size);
int sumArray (int arr[MAX], int size);
int main(int argc, const char * argv[]) {
    int arr[MAX], size;
        
    getArray(arr, size);
    printArray(arr, size);
    
    cout << "Sum of array element: " << sumArray(arr, size) << endl;
    
    return 0;
}// end main

void getArray (int arr[MAX], int &size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout<< "Index [" << i << "] = ";
        cin >> arr[i];
    }
}// get array function

void printArray (int arr[MAX], int size) {
    cout << "Array elements are: ";
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// print array function

int sumArray (int arr[MAX], int size) {
    if (size == 0) {
        return 0;
    } else {
        return arr[size - 1] + sumArray(arr, size - 1);
    }
}
