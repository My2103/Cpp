//
//  main.cpp
//  review c++
//
//  Created by Mai Ngoc Diem My on 2/1/25.
//
#define MAX 100
#include <iostream>
using namespace std;
void getTwoDimension (int arr2D[MAX][MAX], int &r, int &c);
void printTwoDimension (int arr2D[MAX][MAX], int r, int c);
void checkNegative (int arr2D[MAX][MAX], int r, int c);
void convertToOneDimension (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]);
void swapFunction (int &a, int &b);
void sortOneDimensionArray (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]);
void sortTwoDimensionArray (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]);
int main(int argc, const char * argv[]) {
    int arr2D[MAX][MAX];
    int arr1D[MAX * MAX];
    int r, c;
    
    getTwoDimension (arr2D, r, c);
    printTwoDimension (arr2D, r, c);
    checkNegative(arr2D, r, c);
    convertToOneDimension (arr2D, r, c, arr1D);
    sortOneDimensionArray(arr2D, r, c, arr1D);
    sortTwoDimensionArray (arr2D, r, c, arr1D);
    
    return 0;
}// main

void getTwoDimension (int arr2D[MAX][MAX], int &r, int &c) {
    cout << "Enter the row of array: ";
    cin >> r;
    
    cout << "Enter the column of array: ";
    cin >> c;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Index [" << i << "][" << j << "] = ";
            cin >> arr2D[i][j];
        }
    }
}// getTwoDimension array

void printTwoDimension (int arr2D[MAX][MAX], int r, int c) {
    cout << "Two dimension array elements are: " << endl;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }
}// printTwoDimension array

void checkNegative (int arr2D[MAX][MAX], int r, int c) {
    bool has_negative_row = false;
    
    for (int i = 0; i < r; i++) {
        bool all_negative = true;
        for (int j = 0; j < c; j++) {
            if (arr2D[i][j] >= 0) {
                all_negative = false;
                break;
            }
        }
        if (all_negative == true) {
            has_negative_row = true;
            break;
        }
    }
    if (has_negative_row == true) {
        cout << "There is at least a row all negative in the array." << endl;
    } else {
        cout << "There are no row all negative in array." << endl;
    }
}// check negative row
//There are another way that is write two function, we have one function to check row (or there all negative or not), and one function in order to answer yes or no.

void convertToOneDimension (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]) {
    int k = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr1D[k++] = arr2D[i][j];
        }
    }
    
    /*cout << "One dimension array: " << endl;
    
    for (int i = 0; i < k; i++) {
        cout << arr1D[i] << " ";
    }
    cout << endl;*/
}// convertToOne Dimension

void swapFunction (int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}// swap function

void sortOneDimensionArray (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]) {
    convertToOneDimension (arr2D, r, c, arr1D);
    
    int n = r * c;
    
    for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr1D[i] > arr1D[j]) {
                    swapFunction(arr1D[i], arr1D[j]);
                }
            }
        }
        
        /*cout << "One dimension array after sort ascending: " << endl;
        
        for (int i = 0; i < n; i++) {
            cout << arr1D[i] << " ";
        }
        cout << endl;*/
}// sort one dimension array

void sortTwoDimensionArray (int arr2D[MAX][MAX], int r, int c, int arr1D[MAX * MAX]) {
    int k = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr2D[i][j] = arr1D[k++];
        }
    }
    
    cout << "Two dimension array after conversion: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }
}// Two dimension array after conversion
