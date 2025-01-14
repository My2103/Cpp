//
//  main.cpp
//  hiii
//
//  Created by Mai Ngoc Diem My on 16/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int day, month, year;
    int day_in_month = 0;
    
    cout<<"Day: ";
    cin>>day;
    
    cout<<"Month: ";
    cin>>month;
    
    cout<<"Year: ";
    cin>>year;
    
    switch(month){
    //Months have 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day_in_month = 31;
            break;
            
        //Months have 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            day_in_month = 30;
            break;
        
        //Months have 28 or 29 days
        case 2:
            if (year%400 == 0 || (year%4==0 && year%100!=0)) {
                day_in_month = 29;
            } else {
                day_in_month = 28;
            }
            break;
        default:
            cout<<"Invalid. Please enter the value between 1 and 12";
            return 1;
    }
    
    //Check if the day invalid
    if (day > day_in_month) {
            cout << "Invalid day entered for the month. Please enter a value between 1 and " << day_in_month << endl;
            return 1; // Exit the program
        }
    
    //Output the next day
    if (day < day_in_month){
        day++;
    } else {
        day = 1;
        if (month == 12){
            month = 1;
            year++;
        } else {
            month++;
        }
    }
    cout<<"The next day: "<<day<<"/"<<month<<"/"<<year<<endl;
        
    return 0;
}
