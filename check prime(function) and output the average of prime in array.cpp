//
//  main.cpp
//  luyen thi7
//
//  Created by Mai Ngoc Diem My on 19/05/2024.
//

#include <iostream>
using namespace std;
bool isPrime (int num);
int main(int argc, const char * argv[]) {
    //Prompt the size of the array form user
    int size; //Declare variable size
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    //Prompt the array from user
    int array[size]; //Declare variable array
    cout<<"Enter "<<size<<" interger:";
    for (int i = 0; i < size; ++i) {
        cin>>array[i];
    }
    
    //Check Prime
    int countPrime = 0;
    int sumPrime = 0;
    
    for (int i = 0; i < size; i++){
        if (isPrime(array[i])) {
            countPrime++;
            sumPrime += array[i];
        }
    }
    double average = (double)sumPrime/countPrime;
    cout<<"The average of prime numbers in this array is: "<<average<<endl;
    return 0;
}
bool isPrime (int num) {
    if (num <= 1){
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
            
    }
    return true;
}
