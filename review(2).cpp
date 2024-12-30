//
//  main.cpp
//  review c++
//
//  Created by Mai Ngoc Diem My on 30/12/24.
//
#define MAX 100
#include <iostream>
using namespace std;
void getArray (int arr[MAX], int &n);
void printArray (int arr[], int n);
void swapFunction (int &a, int &b);
void sortArray (int arr[MAX], int n);
void sortDescendingArray (int arr[MAX], int n);
void findLargestNegative (int arr[MAX], int n);
void findSmallestPositive (int arr[MAX], int n);
int main(int argc, const char * argv[]) {
    int arr[MAX], n;
    
    getArray(arr, n);
    printArray(arr, n);
    sortArray(arr, n);
    sortDescendingArray(arr, n);
    findLargestNegative(arr, n);
    findSmallestPositive(arr, n);
    
    return 0;
}// main
void getArray (int arr[MAX], int &n) {
    cout << "Enter the size of the array: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout<< "Index [" << i << "] = ";
        cin >> arr[i];
    }
}// get array function

void printArray (int arr[MAX], int n) {
    cout << "Array elements are: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// print array function

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

void sortDescendingArray (int arr[MAX], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swapFunction(arr[i], arr[j]);
            }
        }
    }
    
    cout << "Array after sort descending: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}// sort descending function

void findLargestNegative (int arr[MAX], int n) {
    int max_negative = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            max_negative = arr[i];
            break;
        }
    }
    
    if (max_negative == 0) {
        cout << "There are no negative number in this array." << endl;
    } else {
        cout << "The largest negative number is: " << max_negative << endl;
    }
}// find largest negative number

void findSmallestPositive (int arr[MAX], int n) {
    bool positive_number = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_number = true;
            break;
        }
    }
    
    if (!positive_number) {
        cout << "There are no positive number in this array." << endl;
        return;
    }
    
    int min_positive = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < min_positive && arr[i] > 0) {
            min_positive = arr[i];
        }
    }
    
    cout << "The smallest positive number is: " << min_positive << endl;
}// find the smallest positive number
