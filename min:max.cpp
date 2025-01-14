//
//  main.cpp
//  luyen thi8
//
//  Created by Mai Ngoc Diem My on 20/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number1, number2, number3;
    
    cout<<"Enter the first number: ";
    cin>>number1;
    
    cout<<"Enter the second number: ";
    cin>>number2;
    
    cout<<"Enter the third number: ";
    cin>>number3;
    
    int max = number1;
    
    if (number2 > max) {
            max = number2;
        }
    
    if (number3 > max) {
            max = number3;
        }
    
    
    
    int min = number1;
    
    if (number2 < min) {
        min = number2;
    }
    
    if (number3 < min) {
        min = number3;
    }
    cout<<"The max number is: "<<max<<endl;
    cout<<"The min number is: "<<min<<endl;
    return 0;
}
