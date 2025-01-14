//
//  main.c
//  thi thi thi thi thoiiii :))))))
//
//  Created by Mai Ngoc Diem My on 20/09/2023.
//

#include <stdio.h>
#include <math.h>
int checkSquare(int n);
int checkArmstrong(int n);
int checkPerfect(int n);
int main(int argc, const char * argv[]) {
    int n;
    
    printf("Input n =");
    scanf("%d", &n);
    
    //input n
    while(n<=0)
    {
        printf("Input n =");
        scanf("%d", &n);
    }
    printf("%d\n", n);
    
    //Square number
    if(checkSquare(n)==1)
        printf("%d is square number\n", n);
    else
        printf("%d is not square number\n", n);
    
    //Armstrong
    if(checkArmstrong(n)==1)
    {
        printf("%d is Armstrong number\n", n);
    }
    else{
        printf("%d is not Armstrong number\n", n);
    }
    
    //Perfect
    if(checkPerfect(n)==1)
    {
        printf("%d is perfect number\n", n);
    }
    else
    {
        printf("%d is not perfect number\n", n);
    }
    return 0;
    
    return 0;
}
int checkSquare(int n)
{
    float num = sqrt(n);
    
    if((int)num*(int)num==n)
        return 1;
    return 0;
}

int checkArmstrong(int n)
{
    int n1, c = 0, sum = 0;
    n1=n;
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
    
    if (sum==n1)
        return 1;
    return 0;
}

int checkPerfect(int n)
{
    int i = 1, sum = 0;
    do
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
        i++;
    }
    while (i < n);
    
    if(sum==n)
    return 1;
return 0;
}


