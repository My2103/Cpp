//
//  main.cpp
//  break2
//
//  Created by Mai Ngoc Diem My on 28/05/2024.
//

#include <iostream>
#include <cmath>
using namespace std;
int addition (int number1, int number2);
double division (int number1, int number2);
void addition1 (int number1, int number2);
int main(int argc, const char * argv[]) {
    int number1, number2;
    
    cout<<"Enter number 1 = ";
    cin>>number1;
    
    cout<<"Enter number 2 = ";
    cin>>number2;
    
    /*cout<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
    cout<<"Division = "<<static_cast<double>(number1)/number2<<endl;*/
    
    cout<<number1<<" + "<<number2<<" = "<<addition(number1, number2)<<endl;
    cout<<number1<<"/"<<number2<<" = "<<division(number1, number2)<<endl;
    addition1 (number1, number2);
    return 0;
}
int addition (int number1, int number2){
    return number1+number2;
}

double division (int number1, int number2){
    return static_cast<double>(number1)/number2;
}

void addition1 (int number1, int number2){
    cout<<"Hello, number1 + number2 = "<<number1 + number2<<endl;
}
