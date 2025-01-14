n//
//  main.cpp
//  Armstrong
//
//  Created by Mai Ngoc Diem My on 23/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number, number_of_digits = 0, sum = 0;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    int number1 = number;
    
    //Count how many digits in the number
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
        cout<<number1<<" is Armstrong number."<<endl;
    } else {
        cout<<number1<<" is not Armstrong number."<<endl;
    }
    
    return 0;
}
