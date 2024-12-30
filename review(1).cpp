//
//  main.cpp
//  review c++
//
//  Created by Mai Ngoc Diem My on 30/12/24.
//

#include <iostream>
using namespace std;
void sumFunction (int a, int b);
void subtractFunction (int a, int b);
void multipleFunction (int a, int b);
void divideFunction (int a, int b);
void inputNumber (int &a, int &b);
int main(int argc, const char * argv[]) {
    int a, b;
    
    inputNumber(a, b);
    sumFunction(a, b);
    subtractFunction(a, b);
    multipleFunction (a, b);
    divideFunction (a, b);
    return 0;
}// main

void inputNumber (int &a, int &b) {
    cout << "Type the first number: "; // Type a number and press enter
    cin >> a; // Get user input from the keyboard
    cout << "Type the second number: "; // Type a number and press enter
    cin >> b; // Get user input from the keyboard
}// Input function
void sumFunction (int a, int b) {
    cout << a + b << endl;
}// Sum function

void subtractFunction (int a, int b) {
    cout << a - b << endl;
}// Subtract function

void multipleFunction (int a, int b) {
    cout << a * b << endl;
}// Multiple function

void divideFunction (int a, int b) {
    cout << static_cast<double>(a) / b << endl;
}// Divide function


