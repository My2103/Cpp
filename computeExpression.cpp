//
//  main.cpp
//  infix&postfix
//
//  Created by Mai Ngoc Diem My on 18/1/25.
//

#include <iostream>
using namespace std;
int prec (char c);
string infixToPostfix (string infix);
int evaluatePostfix (string postfix);
int main(int argc, const char * argv[]) {
    string infix;
    cout << "Enter an infix expression (use only numbers 0-9 and the operators +, -, *, /, ^): ";
    cin >> infix;
    
    // Convert from infix to suffix
    string postfix = infixToPostfix(infix);
    cout << "Suffix expression: " << postfix << endl;
    
    // Calculate the value of the postfix expression
    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;
    
    return 0;
}// main

int prec (char c) {
    if (c == '^') {
        return 3;
    } else if (c == '/' || c == '*') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}// Function that determines operator precedence

string infixToPostfix (string infix) {
    stack<char> operators; // Stack to store operators
    string postfix = ""; // String to store the postfix expression
    
    //For loop in take operator in infix string
    for (int i = 0; i < infix.length(); i++) {
        //If operand (number or letter), add to result
        if (isalnum(infix[i])) {
            postfix += infix[i];
        }
        // Nếu là dấu mở ngoặc, đẩy vào stack
        else if ( infix[i] == '(') {
            operators.push(infix[i]);
        }
        // Nếu là dấu đóng ngoặc, lấy các toán tử ra khỏi stack đến khi gặp '('
        else if (infix[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Loại bỏ '(' khỏi stack
        }
        else {
            // If the stack is not empty and the top operator has a higher priority than the currently considered operator, the loop is executed.
            while (!operators.empty() && prec(operators.top()) >= prec(infix[i])) {
                postfix += operators.top(); //The top element in stack was taken out and added to postfix string
                operators.pop();
            }
            operators.push(infix[i]);
        }
    }
    // take out all of the operator in stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    return postfix;
}// Function convert infix to postfix

int evaluatePostfix (string postfix) {
    stack<int> operands; // Stack stores operands
    
    for (int i = 0; i < postfix.length(); i++) {
        // If it is an operand (number), push it to the stack.
        if (isdigit(postfix[i])) {
            operands.push(postfix[i] - '0'); //Convert character to integer
        }
        // If it is an operator, perform the calculation
        else {
            int val2 = operands.top();
            operands.pop();
            int val1 = operands.top();
            operands.pop();
            
            switch (postfix[i]) {
                case '+': operands.push(val1 + val2);
                break;
                case '-': operands.push(val1 - val2);
                break;
                case '*': operands.push(val1 * val2);
                break;
                case '/': operands.push(val1 / val2);
                break;
                case '^': operands.push(pow(val1, val2));
                break;
            }
        }
    }
    return operands.top();
}

