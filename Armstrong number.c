s//
//  main.c
//  class
//
//  Created by Mai Ngoc Diem My on 14/09/2023.
//
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n, n1, c = 0, sum = 0;
    
    printf("Input number here :");
    scanf("%d", &n);
    n1 = n;
    
    while(n>0)
    {
        n = n/10;
        c++;
    }
    
    n=n1;
    
    while(n>0)
    {
        int a = n % 10;
        sum = sum + pow(a,c);
        n = n/10;
    }
   
    if(sum == n1)
    {
        printf("This is Armstrong number");
    }
    else{
        printf("This is not Armstrong number");
    }
    return 0;
}
