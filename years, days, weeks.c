//
//  main.c
//  Years, Days, Weeks
//
//  Created by Mai Ngoc Diem My on 30/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a;
    int years = a/365;
    int weeks = (a- years*365)/7;
    int days = a - (years*365 + weeks*7);
    
    printf("Test data :");
    scanf("%d", &a);
    
    printf("Years : %d\n", years = a/365);
    printf("Weeks : %d\n", weeks = (a- years*365)/7);
    printf("Days : %d\n", days = a - (years*365 + weeks*7));
    
    return 0;
}
