//
//  main.c
//  vui là vui là vui
//
//  Created by Mai Ngoc Diem My on 25/09/2023.
//

#include <stdio.h>
#include <math.h>
void input(int*n);
int checkSquarenumber (int n);
int checkPerfectnumber (int n);
int checkArmstrongnumber (int n);
int checkPrimenumber (int n);
void printAllsquarenumber (int n);
void printnsquarenumber (int n);
int main(int argc, const char * argv[]) {
    int n;
    
    //input n
    input(&n);
    
    //checkSquarenumber
    if(checkSquarenumber(n)==1)
        printf("%d is Square number\n", n);
    else
        printf("%d is not Square number\n", n);
    
    //checkPerfectnumber
    if(checkPerfectnumber(n)==1)
        printf("%d is perfect number\n", n);
    else
        printf("%d is not perfect number\n", n);
    
    //checkArmstrongnumber
    if(checkArmstrongnumber(n)==1)
        printf("%d is Armstrong number\n", n);
    else
        printf("%d is not Armstrong number\n", n);
    
    //checkPrimenumber
    if(checkPrimenumber(n)==1)
        printf("%d is Prime number\n", n);
    else
        printf("%d is not Prime number\n", n);
    
    //Output all elements are square number
    printf("Output all elements are square number : ");
    printAllsquarenumber(n);
    
    //Output n Square number
    printf("Output n Square number : ");
    printnsquarenumber(n);
    return 0;
}
//function definition

//input n function
void input(int*n){
    printf("Input n =");
    scanf("%d", &*n);
}
//checkSquarenumber fuction
int checkSquarenumber (int n){
    float n1 = sqrt(n);
    if((int)n1*(int)n1==n)
        return 1;
    return 0;
}
//checkPerfectnumber function
int checkPerfectnumber (int n){
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
//checkPrimenumber function
int checkPrimenumber (int n){
    if(n<=1)
        return 0;
    for(int i = 2; i<=n/2; i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Output all elements are square number function
void printAllsquarenumber (int n){
    int i;
    
    for(i = 1; i<= sqrt(n); i++){
        printf("%2d", i*i);
    }
}
//Ouput n square number function
void printnsquarenumber (int n){
    int i;
    for(i = 1; i<=n; i++)
        printf("%4d", i*i);
}
