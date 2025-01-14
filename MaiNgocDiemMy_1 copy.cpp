//
//  main.cpp
//  test2
//
//  Created by Mai Ngoc Diem My on 04/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
int checkPrime (int number);
void output (int number);
void sumPrime (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    input(number);
    
    if(checkPrime(number)==1){
        cout<<number<<" is prime number."<<endl;
    } else {
        cout<<number<<" is not prime number."<<endl;
    }
    
    output(number);
    
    sumPrime(number);
    
    return 0;
}
void input (int &number) {
    cout<<"Enter the number: ";
    cin>>number;
    
    while (number<=0){
        cout<<"Enter the number: ";
        cin>>number;
    }
}//end void input

int checkPrime (int number){
    if(number <= 1){
        return 0;
    }
    
    for (int i = 2; i*i <= number; i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}//end check Prime

void output (int number) {
    cout<<"All of the prime number <= "<<number<<" is "<<endl;
    for(int i = 2; i <= number; i++){
        if(checkPrime(i)==1){
            cout<<i<<endl;
        }
    }
}

void sumPrime (int number){
    int sum = 0;
    
    for(int i = 1; i<= number; i++){
        if(checkPrime(i)==1){
            sum += i;
        }
    }
    cout<<"The sum of all number from 1 to "<<number<<" = "<<sum<<endl;
}
