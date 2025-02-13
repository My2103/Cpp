//
//  main.cpp
//  Recursion practice (2)
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//

#include <iostream>
using namespace std;
void inputNumber (int &num);
int factorial (int n);
int main(int argc, const char * argv[]) {
    int num;
    inputNumber(num);
    
    cout << "Factorial = " << factorial(num) << endl;;
    return 0;
}// end main

void inputNumber (int &num) {
    cout << "Enter a number to compute factorial: ";
    cin >> num;
}// input function

int factorial (int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
