//
//  main.cpp
//  check prime
//
//  Created by Mai Ngoc Diem My on 26/05/2024.
//

#include <iostream>
#include <cmath>
using namespace std;
/*int checkPrime (int number);
int checkSquare (int number);
int checkArmstrong (int number);*/
int checkPerfect (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    cout<<"Enter the number: ";
    cin>>number;
    
    /*for (int i = 2; i <= number/2; i++) {
        if(number%i==0){
            divisor++;
        }
    }
    
    if(divisor==0){
        cout<<"This number is prime"<<endl;
    } else {
        cout<<"This number is not prime"<<endl;
    }*/
    
    /*if(checkPrime(number)==1){
        cout<<"This number is prime"<<endl;
    } else {
        cout<<"This number is not prime"<<endl;
    }
    
    if(checkSquare(number)==1) {
        cout<<"This number is square."<<endl;
    } else {
        cout<<"This number is not square."<<endl;
    }
    
    if(checkArmstrong(number)==1){
        cout<<"This is armstrong number."<<endl;
    } else {
        cout<<"This is not armstrong number."<<endl;
    }*/
    
    if (checkPerfect(number) == 1){
        cout<<"This is perfect number."<<endl;
    } else {
        cout<<"This is not perfect number."<<endl;
    }
    return 0;
}

/*int checkPrime (int number) {
    int divisor = 0;
    
    if (number <=1 ){
        return 0;
    }
    for(int i = 2; i <= number/2; i++){
        if(number%i==0){
            divisor++;
        }
    }
    if(divisor==0){
        return 1;
    } else {
        return 0;
    }
}

int checkSquare (int number) {
    float a = sqrt(number);
    
    if((int)a * (int)a == number){
        return 1;
    } else {
        return 0;
    }
}

int checkArmstrong (int number) {
    int number1, number_of_digits = 0, sum =0;
    
    number1 = number;
    
    while (number>0){
        number = number/10;
        number_of_digits++;
    }
    
    number = number1;
    
    while (number>0){
        int digit = number%10;
        sum += pow(digit, number_of_digits);
        number = number/10;
    }
    
    if(sum==number1){
        return 1;
    } else {
        return 0;
    }
}*/

int checkPerfect (int number) {
    int i = 1, sum = 0;
    
    do {
        if(number % i ==0){
            sum += i;
        }
        i++;
    } while(i < number);
    
    if(sum == number){
        return 1;
    } else {
        return 0;
    }
}
