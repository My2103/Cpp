//
//  main.cpp
//  infix&postfix assignment
//
//  Created by Mai Ngoc Diem My on 24/1/25.
//

#include <iostream>
#include <stack>
using namespace std;
string addBrackets(const string &expression);
int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;
    
    /*// Convert from infix to suffix
    string postfix = infixToPostfix(infix);
    cout << "Suffix expression: " << postfix << endl;*/
    
    // Add bracket
    string balanced = addBrackets(expr);
    cout << "Balanced Expression: " << balanced << endl;

    return 0;
}

string addBrackets(const string &expr) {
    stack<string> operands; // Stack để lưu các toán hạng và biểu thức
    stack<char> operators; // Stack để lưu các toán tử
    
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            operators.push(expr[i]);
        } else if (expr[i] == ')') {
            // Lấy hai toán hạng và toán tử tương ứng
            string op2 = operands.top();
            operands.pop();
            string op1 = operands.top();
            operands.pop();
            char op = operators.top();
            operators.pop();

            // Tạo biểu thức mới với dấu ngoặc
            string newExpr = "(" + op1 + op + op2 + ")";
            operands.push(newExpr);
        } else {
            operands.push(string(1, expr[i]));
        }
    }

    // Kết quả cuối cùng sẽ nằm trên đỉnh stack
    return operands.top();
}
