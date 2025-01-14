//
//  main.cpp
//  luyen thi12
//
//  Created by Mai Ngoc Diem My on 20/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int day, month, year, pre_day, pre_month, pre_year;
    
    cout<<"Day: ";
    cin>>day;
    
    cout<<"Month: ";
    cin>>month;
    
    cout<<"Year: ";
    cin>>year;
    
    pre_day = day;
    pre_month = month;
    pre_year = year;
    
    if(day <= 0 || day > 31) {
        cout<<"This day is invalid. Please enter the correct day."<<endl;
        pre_day = 0;
        pre_month = 0;
        pre_year = 0;
    }
    
    if(day >= 2 && day <= 28) {
        pre_day = day - 1;
    } else {
        switch (month) {
            case 5:
            case 7:
            case 10:
            case 12:
                if (day >= 2 && day <=31) {
                    pre_day = day - 1;
                } else if (day == 1) {
                    pre_day = 30;
                    pre_month = month - 1;
                }
                break;
                
            case 4:
            case 6:
            case 9:
            case 11:
                if (day >= 2 && day <= 30) {
                    pre_day = day - 1;
                } else if (day == 1) {
                    pre_day = 31;
                    pre_month = month - 1;
                } else if (day == 31) {
                    cout<<"This day is invalid."<<endl;
                    pre_day = 0;
                    pre_month = 0;
                    pre_year = 0;
                }
                break;
                
            case 8:
                if (day > 1) {
                    pre_day = day - 1;
                } else if (day == 1) {
                    pre_day = 31;
                    pre_month = month - 1;
                }
                break;
                
            case 3:
                if (day > 1) {
                    pre_day = day - 1;
                } else if (day == 1) {
                    if (year%400 == 0 || (year%4==0 && year%100!=0)) {
                        pre_day = 29;
                    } else {
                        pre_day = 28;
                    }
                    pre_month = month - 1;
                }
                break;
                
            case 2:
                if (day == 29) {
                    if (year%400 == 0 || (year%4==0 && year%100!=0)) {
                        pre_day = day - 1;
                    } else {
                        cout<<"This day is invalid."<<endl;
                        pre_day = 0;
                        pre_month = 0;
                        pre_year = 0;
                    }
                } else if (day == 1) {
                    pre_day = 31;
                    pre_month = month - 1;
                }
                break;
                
            case 1:
                if (day > 1) {
                    pre_day = day - 1;
                } else if (day == 1) {
                    pre_day = 31;
                    pre_month = 12;
                    pre_year = year - 1;
                }
                break;
            default:
                cout<<"This month is invalid."<<endl;
                pre_day = 0;
                pre_month = 0;
                pre_year = 0;
                break;
        }
       
    }
    cout<<"The previous day: "<<pre_day<<"/"<<pre_month<<"/"<<pre_year<<endl;
    return 0;
}
