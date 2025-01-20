//
//  main.c
//  ssss
//
//  Created by Mai Ngoc Diem My on 19/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int is_Square (int n);
    int isArmstrong(int n);
    int isPerfectnumber(int n);
    int main(int argc, const char * argv[]) {
        int n;
        int n1, c = 0, sum = 0;
      
        
        //input
        printf("Input interger number :");
        scanf("%d", &n);
        
        //output
        while(n<=0)
        {
            printf("Input interger number :");
            scanf("%d", &n);
         
        }
        printf("%d\n", n);
        
        //Square number
        if(is_square (n))
        {
            printf("%d is a square number.\n", n);
        }
        else
        {
            printf("%d is not a square number.\n", n);
        }
        
        /*Armstrong number*/
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
            n=n/10;
        }
        
        if(sum == n1)
        {
            printf("%d is Armstrong number.\n", n1);
        }
        else
        {
            printf("%d is not Armstrong number.\n", n1);
        }
        
        /*Perfect number*/
        int i = 1;
        while(i < n)
        {
            if(n%i==0)
            {
                sum = sum + i;
            }
            i++;
        }
        
        if(isPerfectnumber(n))
        {
            printf("%d is perfect number.\n", n1);
        }
        else
        {
            printf("%d is not perfect number.\n", n1);
        }
        
    return 0;
}
