n//
//  main.cpp
//  practice fuction
//
//  Created by Mai Ngoc Diem My on 30/05/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
void output (int number);
int addition (int digits);
int checkArmstrong (int number);
int checkPerfect (int number);
int checkSquare (int number);
int checkPrime (int a);
int checkSymmetric (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    //Input and output number
    input(number);
    output(number);
    
    //Sum all the elements of the number
    cout<<"The sum of element of the number = "<<addition(number)<<endl;
    
    //Check Armstrong number
    if(checkArmstrong(number)==1){
        cout<<number<<" is Armstrong number."<<endl;
    } else {
        cout<<number<<" is not Armstrong number."<<endl;
    }
    
    //Check Perfect number
    if (checkPerfect(number) == 1){
        cout<<number<<" is Perfect number."<<endl;
    } else {
        cout<<number<<" is not Perfect number."<<endl;
    }
    
    //Check Square number
    if(checkSquare(number)==1) {
        cout<<number<<" is Square number."<<endl;
    } else {
        cout<<number<<" is not square number."<<endl;
    }
    
    //Check Prime number
    if(checkPrime(number)==1){
        cout<<number<<" is Prime number."<<endl;
    } else {
        cout<<number<<" is not Prime number."<<endl;
    }
    
    //Check Symmetric number
    if(checkSymmetric(number)==1){
        cout<<number<<" is Symmetric number."<<endl;
    } else {
        cout<<number<<" is not Symmetric number."<<endl;
    }
    return 0;
}//end main

void input (int &number) {
    cout<<"Enter a number: ";
    cin>>number;
}//end void input

void output (int n) {
    cout<<"You input number = "<<n<<endl;
}//end void output

int addition (int number){
    int sum = 0;
    while (number > 0){
        int digits = number%10;
        number = number/10;
        sum += digits;
    }
    return sum;
} //end addition

int checkArmstrong (int number){
    int number_of_digits = 0, sum = 0;
    
    int number1 = number;
    while (number > 0){
        number = number/10;
        number_of_digits++;
    }
    
    number = number1;
    
    while(number > 0){
        int digits = number%10;
        number = number/10;
        sum += pow(digits, number_of_digits);
    }
    
    if (sum==number1){
        return 1;
    } else {
        return 0;
    }
}//end check Armstrong

int checkPerfect (int number){
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
}//end check Perfect

int checkSquare (int number) {
    float a = sqrt(number);
    
    if((int)a * (int)a == number){
        return 1;
    } else {
        return 0;
    }
}//end check Square

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
}//end check Prime

int checkSymmetric (int number) {
    int number1 = number;
    int reverseNumber = 0;
    
    while (number>0){
        reverseNumber = reverseNumber*10 + number%10;
        number = number/10;
    }
    if(reverseNumber == number1){
        return 1;
    } else {
        return 0;
    }
}//end check Symmetric

