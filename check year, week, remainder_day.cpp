//
//  main.cpp
//  luyen thi9
//
//  Created by Mai Ngoc Diem My on 20/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int day, year, week, remainder_day;
    
    cout<<"Enter the number of days: ";
    cin>>day;
    
    year = day/365;
    week = (day%365)/7;
    remainder_day = (day%365)%7;
    
    cout<<"Years: "<<year<<endl;
    cout<<"Weeks: "<<week<<endl;
    cout<<"Remainder day: "<<remainder_day<<endl;
    return 0;
    
    /*bool isLeapYear(int year) {
         return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
     }

     int main(int argc, const char * argv[]) {
         int day, year, week, remainder_day;
         
         cout<<"Enter the number of days: ";
         cin>>day;
         
         year = day/365;
         remainder_day = day%365;
         week = remainder_day/7;
         remainder_day %= 7;
         
         // Adjust for leap years
         int leap_years = year / 4 - year / 100 + year / 400;
         if (remainder_day >= leap_years) {
             remainder_day -= leap_years;
         } else {
             year--;
             remainder_day += 365 - leap_years;
         }
         
         cout<<"Years: "<<year<<endl;
         cout<<"Weeks: "<<week<<endl;
         cout<<"Remainder day: "<<remainder_day<<endl;
         return 0;
     }
*/
}
