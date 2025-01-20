//
//  main.c
//  homework
//
//  Created by Mai Ngoc Diem My on 13/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i = 1, sum = 0;
    
    printf("Input number :");
    scanf("%d", &n);
    
    while(i < n)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
        i++;
    }
    
    if(sum == n)
    {
        printf("%d is perfect number\n", n);
    }
    else
    {
        printf("%d is not perfect number\n", n);
    }
    return 0;
}
