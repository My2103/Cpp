//
//  main.c
//  In-out
//
//  Created by Mai Ngoc Diem My on 05/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int month, year;
    
    printf("Month :");
    scanf("%d", &month);
    
    printf("Year :");
    scanf("%d", &year);
    
    switch(month)
    {
        case 1 :
            printf("Days : 31 days\n");
            break;
        case 2 :
            if (year%400==0)
               printf("Days : 29 days\n");
            else if(year%4==0 && year%100!=0)
                printf("Days : 29 days\n");
            else
                printf("Days : 28 days\n");
            break;
        case 3 :
            printf("Days : 31 days\n");
            break;
        case 4 :
            printf("Days : 30 days\n");
            break;
        case 5 :
            printf("Days : 31 days\n");
            break;
        case 6 :
            printf("Days : 30 days\n");
            break;
        case 7 :
            printf("Days : 31 days\n");
            break;
        case 8 :
            printf("Days : 31 days\n");
            break;
        case 9 :
            printf("Days : 30 days\n");
            break;
        case 10 :
            printf("Days : 31 days\n");
            break;
        case 11 :
            printf("Days : 30 days\n");
            break;
        case 12 :
            printf("Days : 31 days\n");
            break;
    }
    
    
    
    return 0;
}
