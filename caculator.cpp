//
//  main.cpp
//  luyen thi10
//
//  Created by Mai Ngoc Diem My on 20/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number1, number2;
    char Operator;
    
    cout<<"Enter number 1: ";
    cin>>number1;
    cout<<"Enter number 2: ";
    cin>>number2;
    
    cout<<"Enter the operator: ";
    cin>>Operator;
    
    switch (Operator) {
        case '+':
            cout<<"The sum is "<<number1 + number2<<endl;
            break;
        case '-':
            cout<<"The subtract is "<<number1 - number2<<endl;
            break;
        case '*':
            cout<<"The multiple is "<<number1 * number2<<endl;
            break;
        case '/':
            cout<<"The divide is "<<static_cast<double>(number1)/number2<<endl;
            break;
        default:
            cout<<"Invalid. Please enter right operator."<<endl;
            break;
    }
    return 0;
}
