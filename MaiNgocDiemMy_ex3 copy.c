//
//  main.c
//  MaiNgocDiemMyex3
//
//  Created by Mai Ngoc Diem My on 26/09/2023.
//

#include <stdio.h>
int checkLeapYear(int year);
int main(int argc, const char * argv[]) {
    int day, month, year;
    
    printf("Day :");
    scanf("%d", &day);
    
    
    while (day < 1 || day > 31){
        printf("Day :");
        scanf("%d", &day);
    }
   
    printf("Month :");
    scanf("%d", &month);
    
    while (month < 1 || month > 12){
        printf("Month :");
        scanf("%d", &month);
    }
    
    printf("Year :");
    scanf("%d", &year);
    
    day--;
    if(day == 0) {
            month--;
            if(month == 0) {
                year--;
                month = 12;
            }
        if(month == 2) {
                   day = checkLeapYear(year) ? 29 : 28;
            } else if(month == 4 || month == 6 || month == 9 || month == 11) {
                day = 30;
            } else {
                day = 31;
            }
        }

        printf("Previous day : %2d/%2d/%4d\n", day, month, year);

    
   
        
    
    return 0;
}
int checkLeapYear(int year) {
    if(year % 4 != 0) {
        return 0;
    } else if(year % 100 != 0) {
        return 1;
    } else if(year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}
