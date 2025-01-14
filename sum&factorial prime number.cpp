//
//  main.cpp
//  on6
//
//  Created by Mai Ngoc Diem My on 03/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
int checkPrime (int number);
void sumPrime (int number);
void multiplePrime (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    input(number);
    
    if(checkPrime(number)==1){
        cout<<number<<" is prime number."<<endl;
    } else {
        cout<<number<<" is not prime number."<<endl;
    }
    
    //sum
    sumPrime(number);
    
    //factorial
    multiplePrime(number);
    return 0;
}
void input (int &number){
    cout<<"Enter a number: ";
    cin>>number;
}

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

void multiplePrime (int number){
    long long factorial = 1;
    
    for(int i = 1; i<= number; i++){
        if(checkPrime(i)==1){
            factorial *= i;
        }
    }
    cout<<"The factorial of all number from 1 to "<<number<<" = "<<factorial<<endl;
}
