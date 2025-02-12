//
//  main.cpp
//  final project (part 3)
//
//  Created by Mai Ngoc Diem My on 3/2/25.
//

#include <stack>
#include <iostream>
using namespace std;
void sum (string num1, string num2);
bool isNumber (const string &str);
void inputNumber (string &num1, string &num2);
int main(int argc, const char * argv[]) {
    string num1, num2;
    
    inputNumber(num1, num2);
    
    sum(num1, num2);
    
    return 0;
}// end main

bool isNumber (const string &str) {
    for (char c : str) {
        if(!isdigit(c)) return false; // Tra ve false khi phat hien ra ky tu khong phai so
    }
    return !str.empty();
}// function check the input value is number or not

void inputNumber (string &num1, string &num2) {
    // Input first number
    do {
        cout << "Enter number 1: ";
        cin >> num1;
        if (!isNumber(num1)) {
            cout << "Invalid input. Please enter a positive number.\n" << endl;
        }
        
    } while (!isNumber(num1));
    
    // Input second number
    do {
        cout << "Enter number 2: ";
        cin >> num2;
        if (!isNumber(num2)) {
            cout << "Invalid input. Please enter a positive number.\n" << endl;
        }
    }while (!isNumber(num2));
}// function input value

void sum(string num1, string num2) {
    stack<char>operand1;
    stack<char>operand2;
    
    // Push each elements of num1 and num2 into stack
    for (char c : num1) operand1.push(c);
    for (char c : num2) operand2.push(c);
    
    int carry = 0; // Khởi tạo biến carry để lưu số nhớ
    string result = ""; // Create an  empty string to store the result
    
    // While loop to compute the expression
    while (!operand1.empty() || !operand2.empty() || carry != 0) {
        // Lần lượt gán từng phần tử trong stack vào biến op1 và op2 (nếu không có phần tử để gán thì mặc định là 0)
        int op1 = operand1.empty() ? 0 : operand1.top() - '0';
        int op2 = operand2.empty() ? 0 : operand2.top() - '0';
        
        // Remove element out of stack if it complete solve
        if(!operand1.empty()) operand1.pop();
        if(!operand2.empty()) operand2.pop();
        
        int sum = op1 + op2 + carry; // Sum the value of op1, op2, and carry
        carry = sum/10; // Take the value of carry by divide sum to 10
        result = char((sum%10) + '0') + result; // Add the result of the sum to final result
    }// end while loop
    
    cout <<"The result: " << result << endl;
}// end sum
