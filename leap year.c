//
//  main.c
//  if-else
//
//  Created by Mai Ngoc Diem My on 05/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    printf("Input the year here :");
    scanf("%d", &n);
    
    if (n % 4==0)
        printf("%d is a leap year\n", n);
    else if (n % 100==0)
        printf("%d is not a leap year\n", n);
    else
        printf("%d is not a leap year\n", n);
   
    
    return 0;
}
