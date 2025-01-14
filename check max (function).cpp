//
//  main.cpp
//  on1
//
//  Created by Mai Ngoc Diem My on 02/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number1, int &number2, int &number3);
int checkMax (int number1, int number2, int number3);
int main(int argc, const char * argv[]) {
    int number1, number2, number3;
    
    input(number1, number2, number3);
    
    int max = checkMax(number1, number2, number3);
    cout<<"The largest number is: "<<max<<endl;
    return 0;
}//end main

void input (int &number1, int &number2, int &number3){
    cout<<"Enter the first number: ";
    cin>>number1;
    
    cout<<"Enter the second number: ";
    cin>>number2;
    
    cout<<"Enter the third number: ";
    cin>>number3;
}//end input

int checkMax (int number1, int number2, int number3){
    int max = number1;
    
    if (number2 > max){
        max = number2;
    }
    
    if (number3 > max){
        max = number3;
    }
    
    return max;
}//end check max
