//
//  main.cpp
//  review struct
//
//  Created by Mai Ngoc Diem My on 9/1/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &size);
void printArray (int arr[MAX], int size);
void findNumber (int arr[MAX], int size, int &number);
void swapFunction (int &a, int &b);
void sortArray (int arr[MAX], int n);
int binarySearch (int arr[MAX], int size, int &key);
int main(int argc, const char * argv[]) {
    int arr[MAX], size, key;
    //int number;
    
    getArray(arr, size);
    printArray(arr, size);
    sortArray(arr, size);
    int result = binarySearch(arr, size, key);
    
    if (result == -1) {
        cout << "The number " << key << " is not in the array." << endl;
    } else {
        cout << "The number " << key << " is in the array at index " << result << "." << endl;
    }
    return 0;
}// end main

void getArray (int arr[MAX], int &size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Index [" << i << "] = ";
        cin >> arr[i];
    }
}// get Array function

void printArray (int arr[MAX], int size) {
    cout << "The element in the array: " << endl;
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// print Array function

void findNumber (int arr[MAX], int size, int &number) {
    cout << "Enter the number you want to find: ";
    cin >> number;
    
    bool have_number = false;
    //int index_number = 0;
    //For loop to find is the number have in the array or not
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            have_number = true;
            //index_number = i;
            break;
        }
    }// end loop find number
    
    if (have_number == true) {
        cout << "We have number " << number << " in the array." << endl;
        //cout << "Index [" << index_number << "] = " << number << endl;
    } else {
        cout << "We do not have number " << number << " in the array. " << endl;
    }
}// find Number function
void swapFunction (int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}// swap function

void sortArray (int arr[MAX], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swapFunction(arr[i], arr[j]);
            }
        }
    }
    
    cout << "Array after sort ascending: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// sort ascending function

int binarySearch (int arr[MAX], int size, int &key) {
    cout << "Enter the number you want to find: ";
    cin >> key;
    
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right)/2; //Declare mid
        
        if (arr[mid] == key) {
            return mid; //Return the index if found
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}// binary search
