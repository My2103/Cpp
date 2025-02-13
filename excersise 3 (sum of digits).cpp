//
//  main.cpp
//  Recursion practice (2)
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//

#include <iostream>
using namespace std;
void inputNumber (int &number);
int sumDigit (int n);
int main(int argc, const char * argv[]) {
    int number;
    inputNumber(number);
    
    cout << "Sum of digits: " << sumDigit(number) << endl;
    return 0;
}//

void inputNumber (int &number) {
    cout << "Enter a number to compute digits: ";
    cin >> number;
}// input number function

int sumDigit (int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigit(n / 10);
    }
}// recursion sum digit of that number


