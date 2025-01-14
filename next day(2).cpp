//
//  main.cpp
//  check the next day
//
//  Created by Mai Ngoc Diem My on 17/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int day, month, year; //Declare variables day, month, year
    int next_day, next_month, next_year; //Declare variables next_day, next_month, next_year
    
    
    
    //Prompt the day from user
    cout<<"Day: ";
    cin>>day;
    
    cout<<"Month: ";
    cin>>month;
    
    cout<<"Year: ";
    cin>>year;
    
    next_day = day;
    next_month = month;
    next_year= year;
    
    //Check today in order to output the next day
    if ((day <= 0 || day > 31) || (month <= 0 || month > 12)){
        cout<<"The day is invalid."<<endl;
    } else {
        
        if (day >= 1 && day <=27) {
            next_day = day + 1;
        } else {
            switch (month) {
                    //Months have 31 days
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                    if (day < 31) {
                        next_day = day + 1;
                    } else if (day == 31) {
                        next_day = 1;
                        next_month = month + 1;
                    }
                    break;
                    //Months have 30 days
                    
                case 4:
                case 6:
                case 9:
                case 11:
                    if(day < 30) {
                        next_day = day + 1;
                    } else if (day == 30) {
                        next_day = 1;
                        next_month = month + 1;
                    }
                    break;
                    //December
                case 12:
                    if(day < 31){
                        next_day = day + 1;
                    } else if (day == 31) {
                        next_day = 1;
                        next_month = 1;
                        next_year = year + 1;
                    }
                    break;
                    //February
                case 2:
                    if (day == 28) {
                        if (year%400 == 0 || (year%4==0 && year%100!=0)) {
                            next_day = day + 1;
                        } else {
                            next_day = 1;
                            next_month = month + 1;
                        }
                    } else if (day == 29) {
                        if (year%400 == 0 || (year%4==0 && year%100!=0)){
                            next_day = 1;
                            next_month = month + 1;
                        } else {
                            cout<<"This day does not exist."<<endl;
                            next_day = 0;
                            next_month = 0;
                            next_year = 0;
                        }
                    }
                    break;
            }
        }
        cout<<"The next day: "<<next_day<<"/"<<next_month<<"/"<<next_year<<endl;
    }
    

    
    return 0;
}
