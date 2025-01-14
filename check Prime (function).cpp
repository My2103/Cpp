//
//  main.cpp
//  function2
//
//  Created by Mai Ngoc Diem My on 28/05/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
int checkPrime (int number);
void output (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    input(number);
    output(number);
    
    
    
    return 0;
}//end main

void input (int &number) {
    cout<<"Enter a number: ";
    cin>>number;
}//end void input

int checkPrime (int a) {
    int divisor = 0;
    
    if(a<=1){
        return 0;
    }
    
    for(int i = 2; i<=a/2; i++){
        if(a%i==0){
            divisor++;
        }
    }
    if(divisor==0)
        return 1;
    return 0;
}

void output (int number) {
    cout<<"The list of prime number: "<<endl;
    for (int i = 2; i<=number; i++){
        if(checkPrime(i)==1){
            cout<<i<<" ";
            cout<<endl;
        }
    }
}
