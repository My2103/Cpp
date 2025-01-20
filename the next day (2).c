//
//  main.c
//  sắp xong roòii
//
//  Created by Mai Ngoc Diem My on 25/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day, month, year;
    
    printf("Day :");
    scanf("%d", &day);
          
    printf("Month :");
    scanf("%d", &month);
    
    printf("Year :");
    scanf("%d", &year);
    
    int DayinMonth;
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            DayinMonth = 30;
            break;
            
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                DayinMonth = 29;
            } else {
                DayinMonth = 28;
            }
            break;
            
        default:
            DayinMonth = 31;
            break;
    }
    
   if (day < DayinMonth) {
        day++;}
    else if (day == DayinMonth){
        day = 1;
        if(month == 12){
            month = 1;
            year++;
        }
        else {
            month++;
        }
    }
    else{
        printf("Invalid");
    }
    

    
    /*if (day < DayinMonth) {
        day++;
    } else {
        day = 1;
        if (month == 12) {
            month = 1;
            year++;
        } else {
            month++;
        }
    }*/
    
        
    
    printf("The next day: %d/%d/%d\n", day, month, year);
return 0;
}
