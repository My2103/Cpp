//
//  main.cpp
//  test2 1
//
//  Created by Mai Ngoc Diem My on 04/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
void outputReverse (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    input(number);
    
    
    outputReverse(number);
    return 0;
}

void input (int &number) {
    cout<<"Enter a number: ";
    cin>>number;
}//end void input

void outputReverse (int number){
    int reverseNumber = 0;
    
    while (number>0){
        reverseNumber = reverseNumber*10 + number%10;
        number = number/10;
    }
    
    cout<<"The reverse number is "<<reverseNumber<<endl;
}
