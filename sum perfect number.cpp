//
//  main.cpp
//  on5
//
//  Created by Mai Ngoc Diem My on 03/06/2024.
//

#include <iostream>
using namespace std;
void input (int &number);
int checkPerfect (int number);
void sumPerfect (int number);
int main(int argc, const char * argv[]) {
    int number;
    
    //Input number
    input(number);
    
    //Check perfect number
    if(checkPerfect(number)==1){
        cout<<number<<" is perfect number."<<endl;
    } else {
        cout<<number<<" is not perfect number."<<endl;
    }
    
    //Sum all the perfect number
    sumPerfect(number);
    return 0;
}
void input (int &number){
    cout<<"Enter a number: ";
    cin>>number;
}

int checkPerfect (int number){
    int i = 1, sum = 0;
    
    if (number <= 1){
        return 0;
    }
    
    do{
        if(number%i==0){
            sum += i;
        }
        i++;
    }while (i < number);
    
    if(sum==number){
        return 1;
    } else {
        return 0;
    }
}

void sumPerfect (int number){
    int sum = 0;
    for(int i = 1; i <= number; i++){
        if(checkPerfect(i)==1){
            sum += i;
        }
    }
    cout<<"The sum of all number from 1 to "<<number<<" = "<<sum<<endl;
}
