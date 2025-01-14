//
//  main.cpp
//  2024
//
//  Created by Mai Ngoc Diem My on 14/05/2024.
//

#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    /*//Symetric number 3 digits
    //Prompt the number from user
    int number;
    cout<<"Input your number:";
    cin>>number;
    
    //Declare each digit
    int a = number/100;
    int c = number%10;
    
    //Check the number symetric or not
    if (a == c) {
        cout<<"This number is symetric"<<endl;
    } else if (a != c) {
        cout<<"This is not symetric number"<<endl;
    }
    
    //Symetric number 4 digits
    //Prompt the number from user
    int number;
    cout<<"Input your number:";
    cin>>number;
    
  //Declare each digit
    int a = number/1000;
    int d = number%10;
    int b = (number/100)%10;
    int c = (number/10)%10;
    
    //Check the number symetric or not
    if (a == d && b==c) {
        cout<<"This number is symetric"<<endl;
    } else {
        cout<<"This is not symetric number"<<endl;
    }
    
    //Check Armstrong number
    //Prompt the number from user
    int number, digits = 0, sum = 0;
    cout<<"Input your number:";
    cin>>number;
    
    //Check it Armstrong or not
    int number1 = number; //Set the value of number for number1 to keep the input value
    
    while(number>0)
    {
        number = number/10; //Check how many digits the number have
        digits++;                //the number have
    }
    
    number=number1; //Set the value of number1 for number
                    //because the value volatiled after the while loop above
    
    while(number>0)
    {
        int a = number % 10; //Take each digits of number (declare it is a)
        sum = sum + pow(a,digits);//And sum all the power(digits) of that number
        number = number/10;
    }
   
    if(sum == number1)
    {
        cout<<"This number is Armstrong"<<endl;
    }
    else{
        cout<<"This number is not Armstrong number"<<endl;
    }
    
    //Check Armstrong number
    //Prompt the number from user
    int number, a, b, c;
    cout<<"Input your number:";
    cin>>number;
    
    a = number/100;
    b = (number/10)%10;
    c = number%10;
    
    if (number==pow(a,3) + pow(b,3) + pow(c,3)) {
        cout<<"This number is Armstrong"<<endl;
    } else {
        cout<<"This number is not Armstrong number"<<endl;
    }
    
    //Check Square number
    //Prompt the number from user
    int number;
    cout<<"Input your number:";
    cin>>number;
    
    //Check that number is square or not
    float a = sqrt(number);//Declare the float a
    if ((int)a * (int)a==number) {
        cout<<"This is square number"<<endl;
    } else {
        cout<<"This is not square number"<<endl;
    }*/
    
    //CHECK LEAP YEAR
    //Prompt the number from user
    int year;
    cout<<"Input the year:";
    cin>>year;
    
    if (year%400 == 0 || (year%4==0 && year%100!=0)) {
        cout<<"This year is leap year"<<endl;
    } else {
        cout<<"This year is not leap year"<<endl;
    }
    
    
    
    return 0;
}
