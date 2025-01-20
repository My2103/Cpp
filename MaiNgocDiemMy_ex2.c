//
//  main.c
//  MaiNgocDiemMyex2
//
//  Created by Mai Ngoc Diem My on 26/09/2023.
//

#include <stdio.h>
#include <math.h>
void input(int*n);
int checkArmstrongnumber (int n);
void printallArmstrongnumber (int n);
void sumArmstrong (int n);
int main(int argc, const char * argv[]) {
    int n;
    
    //input n
    input(&n);
    
    //checkArmstrongnumber
    if(checkArmstrongnumber(n)==1)
        printf("%d is Armstrong number\n", n);
    else
        printf("%d is not Armstrong number\n", n);
    
    //Print all armstrong number <= n
    printallArmstrongnumber (n);
    
    //Ouput sum of Armstrong
    sumArmstrong (n);
    return 0;
}
//input n function
void input(int*n){
    printf("Input n =");
    scanf("%d", &*n);
}
//checkArmstrongnumber function
int checkArmstrongnumber (int n){
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
//Print all armstrong number <= n (function)
void printallArmstrongnumber (int n){
    int i, num, a, sum = 0;

    
    for(i = 1; i <= n; i++) {
            num= i;
            int count = 0;
            while (num != 0) {
                num = num / 10;
                ++count;
            }

            num = i;
            sum = 0;

            while (num != 0) {
                a = num %10;
                sum = sum + pow(a, count);
                num = num /10;
            }

            if((int)sum == i) {
                printf("%d ", i);
            }
        }
    }
//Ouput sum of Armstrong <= n
void sumArmstrong (int n){
    int i, sum = 0;

       for(i = 1; i <= n; i++) {
           if(checkArmstrongnumber(i)) {
               sum = sum + i;
           }
       }

       printf("The sum of all Armstrong numbers <= %d is: %d", n, sum);
   }



