//
//  main.cpp
//  5
//
//  Created by Mai Ngoc Diem My on 16/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //Declared variables
    int month, year;
    
    //Input month and year
    cout<<"Month: ";
    cin>>month;
    
    cout<<"Year: ";
    cin>>year;
    
    //Output the numbe of days
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Days: 31 days"<<endl;
            break;
        case 2:
            if (year%400 == 0 || (year%4==0 && year%100!=0)) {
                cout<<"Days: 29 days"<<endl;
            } else {
                cout<<"Days: 28 days"<<endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Days: 30 days"<<endl;
            break;
        default:
            cout<<"Invalid"<<endl;
            break;
    }
    
    return 0;
}
