//
//  main.c
//  met met met
//
//  Created by Mai Ngoc Diem My on 01/10/2023.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void inputArray(int a[100], int *n);
void outputArray(int a[100], int n);
void outputMinimum(int a[100], int n);
int sumArray(int a[100], int n);
int checkPrimenumber(int n);
int sumPrimenumber (int a[100], int n);
int checkOdd(int a[100], int n);
int countFrequency(int a[100], int n, int num);
int checkNegativenumber(int a[100], int n);
int checkAlternating(int a[100], int n);
int main(int argc, const char * argv[]) {
    int a[100], n, sum = 0;
    
    inputArray(a, &n);
    outputArray(a, n);
    outputMinimum(a, n);
    
    sum = sumArray(a, n);
    printf("The sum of all elements : %d\n", sum);
    
    int prime_sum;
    prime_sum = sumPrimenumber(a, n);
    
    printf("The sum of all Prime number is %d\n", prime_sum);
    
    if(checkOdd(a, n)) {
            printf("The array is all odd numbers.\n");
        } else {
            printf("The array is not all odd numbers.\n");
        }
    
    int frequency, num;
    printf("Enter the number to count its frequency :");
    scanf("%d", &num);
    
    frequency = countFrequency(a, n, num);
    
    printf("The frequency of %d is : %d\n", num, frequency);

   
    if(checkNegativenumber(a, n)){
        printf("The array has negative number.\n");
    }
        else{
            printf("The array not has negative number.\n");
        }
    
    if(checkAlternating(a, n)){
        printf("The array alternates between negative and positive numbers.\n");
    }
    else
        printf("The array not alternates between negative and positive numbers.\n");
    
    return 0;
}
void inputArray(int a[100], int *n){
    printf("Input n =");
    scanf("%d", &*n);
    
    for(int i=0; i<*n; i++){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
}
void outputArray(int a[100], int n){
    printf("Array :");
    for(int i=0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
}
void outputMinimum(int a[100], int n){
    int min = a[0];
        int minIndex = 0;
        
        for (int i = 1; i<n; i++){
            if(a[i]<min) {
                min=a[i];
                minIndex = i;
            }
        }
        printf("The minimum number of array is %d\n", min);
        printf("The index of the minimum number is %d\n", minIndex);
    }

int sumArray(int a[100], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }
    return sum;
}
int checkPrimenumber(int n){
    if(n<=1)
        return 0;
    for(int i=2; i<=n/2; i++)
        if(n%i==0)
            return 0;
    return 1;
        
}
int sumPrimenumber (int a[100], int n){
    int prime_sum = 0;
    
    for(int i=0; i<n; i++){
        if(checkPrimenumber(a[i])){
            prime_sum = prime_sum + a[i];
        }
    }
    return prime_sum;
}
int checkOdd(int a[100], int n){
    for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) {
                return 0;
            }
        }
        return 1;
    }
int countFrequency(int a[100], int n, int num){
    
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == num){
            count++;
        }
    }
    return count;
}
int checkNegativenumber(int a[100], int n){
    for(int i=0; i<n; i++){
        if(a[i]<0)
            return 1;
    }
   
    return 0;
}
int checkAlternating(int a[100], int n){
    for(int i = 0; i<n; i++){
        if((a[i] < 0 && a[i+1] < 0)||(a[i] >= 0 && a[i+1] >= 0)){
            return 0;
        }
    }
    return 1;
}
