//
//  main.cpp
//  on2
//
//  Created by Mai Ngoc Diem My on 02/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
int checkOdd (int number);
int checkNegative (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    //Prompt a number
    input(number);
    
    //check odd number
    if(checkOdd(number)==1){
        cout<<number<<" is odd number."<<endl;
    } else {
        cout<<number<<" is not odd number."<<endl;
    }
    
    //Check negative number
    if(checkNegative(number)==1) {
        cout<<number<<" is negative number."<<endl;
    } else {
        cout<<number<<" is not negative number."<<endl;
    }
    return 0;
}//end main

void input (int &number){
    cout<<"Enter a number: ";
    cin>>number;
}//end input

int checkOdd (int number){
    if(number%2==0){
        return 0;
    } else {
        return 1;
    }
}//end check odd

int checkNegative (int number){
    if (number < 0){
        return 1;
    } else {
        return 0;
    }
}
