g //
//  main.cpp
//  on
//
//  Created by Mai Ngoc Diem My on 02/06/2024.
//

#include <iostream>
using namespace std;
void getArraySize (int &size);
void getArray (int myArray[], int size);
void printArray (int myArray[], int size);
int addition (int myArray[], int size);
int checkArmstrong (int number);
int checkPerfect (int number);
int checkSquare (int number);
int checkPrime (int number);
int checkSymmetric (int number);
int main(int argc, const char * argv[]) {
    int size;
    
    //Get the array size
    getArraySize(size);
    
    //Get and print the array
    int myArray[size];
    getArray(myArray, size);
    printArray(myArray, size);
    
    //Sum all the elements in the array
    cout<<"Sum = "<<addition(myArray, size)<<endl;
    
    //Output the Armstrong number in the array
    cout<<"Armstrong number in the array is: "<<endl;
    for (int i = 0; i < size; i++){
        if(checkArmstrong(myArray[i])==1){
            cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }

    //Output the perfect number in the array
    cout<<"Perfect number in the array is: "<<endl;
    for (int i = 0; i < size; i++){
        if(checkPerfect(myArray[i])==1){
            cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
    
    //Output the Square number in the array
    cout<<"Square number in the array is: "<<endl;
    for (int i = 0; i < size; i++){
        if(checkSquare(myArray[i])==1){
            cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
    
    //Output the Prime number in the array
    cout<<"Prime number in the array is: "<<endl;
    for (int i = 0; i < size; i++){
        if(checkPrime(myArray[i])==1){
            cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
    
    //Output the Symmetric number in the array
    cout<<"Symmetric number in the array is: "<<endl;
    for (int i = 0; i < size; i++){
        if(checkSymmetric(myArray[i])==1){
            cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
    return 0;
}//end main

void getArraySize (int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
}//end getArraySize

void getArray (int myArray[], int size){
    cout<<"Enter "<<size<<" interger: ";
    for (int i = 0; i < size; ++i) {
        cin>>myArray[i];
    }
}//end getArray

void printArray (int myArray[], int size){
    cout<<"Array elements are: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<"Array["<<i<<"]"<<" = "<<myArray[i]<<endl;
    }
}//end printArray

int addition (int myArray[], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += myArray[i];
    }
    
    return sum;
}//end sum

int checkArmstrong (int number){
    int number_of_digits = 0, sum = 0;
    
    int number1 = number;
    
    while (number > 0) {
        number = number/10;
        number_of_digits++;
    }
    
    number = number1;
    
    while (number > 0){
        int digits = number%10;
        sum += pow(digits, number_of_digits);
        number = number/10;
    }
    
    
    if(sum==number1){
        return 1;
    } else {
        return 0;
    }
}//end check Armstrong

int checkPerfect (int number){
    int sum = 0;
    
    for (int i = 1; i < number; i++){
        if(number%i == 0){
            sum += i;
        }
    }
    if(sum==number){
        return 1;
    } else {
        return 0;
    }
}//end check Perfect

int checkSquare (int number){
    float a = sqrt(number);
    
    if((int)a * (int)a == number){
        return 1;
    } else {
        return 0;
    }
}//end check Square

int checkPrime (int number) {
    
    if(number <= 1){
        return 0;
    }
    
    for (int i = 2; i * i <= number; i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}//end check Prime

int checkSymmetric (int number){
    int number1 = number;
    int reverseNumber = 0;
    
    while (number > 0){
        reverseNumber = reverseNumber*10 + number%10;
        number = number/10;
    }
    if(reverseNumber == number1){
        return 1;
    } else {
        return 0;
    }
}//end check Symmetric


