//
//  main.cpp
//  luyen thi11
//
//  Created by Mai Ngoc Diem My on 20/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number1, number2, number3, number4;
    
    cout<<"Enter number 1: ";
    cin>>number1;
    
    cout<<"Enter number 2: ";
    cin>>number2;
    
    cout<<"Enter number 3: ";
    cin>>number3;
    
    cout<<"Enter number 4: ";
    cin>>number4;
    
    int max = number1;
    
    if (number2 > max) {
        max = number2;
    }
    
    if (number3 > max) {
        max = number3;
    }
    
    if (number4 > max) {
        max = number4;
    }
    
    
    int min = number1;
    
    if (number2 < min) {
        min = number2;
    }
    
    if (number3 < min) {
        min = number3;
    }
    
    if (number4 < min) {
        min = number4;
    }
    
    cout<<"The max is: "<<max<<endl;
    cout<<"The min is: "<<min<<endl;
    
    
    return 0;
}
