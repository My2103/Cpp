//
//  main.cpp
//  test2 2
//
//  Created by Mai Ngoc Diem My on 04/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
void countOdd (int number);
void countEven (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    //Input number
    input(number);
    
    //count odd
    countOdd(number);
    
    //count even
    countEven(number);
    return 0;
}

void input (int &number) {
    cout<<"Enter the number: ";
    cin>>number;
    
    while (number<0){
        cout<<"Enter the number: ";
        cin>>number;
    }
}//end void input

void countOdd (int number){
    int count_odd = 0, digit;
    
    while (number > 0){
        digit = number%10;
        if(digit%2!=0){
            count_odd++;
        }
        number = number/10;
    }
    cout<<"The number of odd number in integer is "<<count_odd<<endl;
}//end count odd

void countEven (int number){
    int count_even = 0, digit;
    
    while (number > 0){
        digit = number%10;
        if(digit%2==0){
            count_even++;
        }
        number = number/10;
    }
    cout<<"The number of even number in integer is "<<count_even<<endl;
}//end count odd





