//
//  main.cpp
//  CCT1
//
//  Created by Mai Ngoc Diem My on 21/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number, a, b, c, d;
    
    cout<<"Enter the number have 4 digits: ";
    cin>>number;
    
    a = number/1000;
    b = (number/100)%10;
    c = (number/10)%10;
    d = number%10;
    
    int max = a;
    
    if (b > max) {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }
    
    if (d > max) {
        max = d;
    }
    
    cout<<"The largest number is: "<<max<<endl;
    
    int min = a;
    
    if (b < min) {
        min = b;
    }
    
    if (c < min) {
        min = c;
    }
    
    if (d < min) {
        min = d;
    }
    
    cout<<"The smallest number is: "<<min<<endl;
    return 0;
}

