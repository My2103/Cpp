//
//  main.cpp
//  on8
//
//  Created by Mai Ngoc Diem My on 03/06/2024.
//

#include <iostream>
using namespace std;
void inputYear (int &year);
int checkLeapYear (int year);
int main(int argc, const char * argv[]) {
    int year;
    
    inputYear(year);
    
    if(checkLeapYear(year)==1){
        cout<<year<<" is leap year."<<endl;
    } else {
        cout<<year<<" is not leap year."<<endl;
    }
    return 0;
}
void inputYear (int &year){
    cout<<"Enter the year: ";
    cin>>year;
}

int checkLeapYear (int year){
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        return 1;
    } else {
        return 0;
    }
}
