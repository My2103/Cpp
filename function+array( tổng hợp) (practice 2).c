//
//  main.c
//  yyy
//
//  Created by Mai Ngoc Diem My on 02/10/2023.
//

#include <stdio.h>
void inputArray(int a[100], int *n);
void outputArray(int a[100], int n);
void findMaxeven(int a[100], int n);
int sumEven(int a[100], int n);
int checkMinimalistarray(int a[100], int n);
void findMostFrequent(int a[100], int n);
int checkPrime(int n);
int sumPrime(int a[100], int n);
void removeDuplicates(int a[100], int *n);
void printArray (int a[100], int n);
int main(int argc, const char * argv[]) {
    int a[100], n;
    
    //input&output Array
    inputArray(a, &n);
    outputArray(a, n);
    
    //max even
    findMaxeven(a, n);
    
    //sum even
    int even_sum = 0;
    
    even_sum = even_sum + sumEven(a, n);
    printf("The sum of even elements is : %d\n", even_sum);
    
    //minimalist array
    if(checkMinimalistarray(a, n)==1){
        printf("The array is minimalist.\n");
    }
    else{
        printf("The array is not minimalist.\n");
    }
    
    //element that appears most often
    findMostFrequent(a, n);
    
    //sum prime
    int prime_sum = 0;
    
    prime_sum = prime_sum + sumPrime(a, n);
    printf("The sum of prime number is : %d\n", prime_sum);
    
    //remove element
    removeDuplicates(a, &n);
    
    printArray(a, n);
    return 0;
}
void inputArray(int a[100], int *n){
    printf("Input n =");
    scanf("%d", &*n);
    
    for(int i = 0; i<*n; i++){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
}
void outputArray(int a[100], int n){
    printf("Array :");
    for(int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
}
void findMaxeven(int a[100], int n){
    int even_max = 0, even_maxIndex = 0, flag = 0;
    
    for(int i = 0; i<n; i++){
        if(a[i]%2==0 && a[i]>even_max){
            even_max = a[i];
            flag = 1;
            even_maxIndex = i;
        }
    }
    if(flag == 0){
        printf("The array not have even number.\n");
    }
    else{
        printf("The max even number is %d\n", even_max);
        printf("The index : %d\n", even_maxIndex);
    }
}
int sumEven(int a[100], int n){
    int even_sum = 0, i = 0;
    
    for(i = 0; i< n; i++){
        if(a[i]%2==0){
            even_sum = even_sum + a[i];
        }
    }
    return even_sum;
}
int checkMinimalistarray(int a[100], int n){
    for(int i = 0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]==a[j])
                return 0;
    return 1;
}
void findMostFrequent(int a[100], int n){
    int maxCount = 0, res = a[0], currCount = 1;
    
    for(int i = 1; i < n; i++){
        if(a[i]==a[i-1])
            currCount++;
        
        else{
            if(currCount > maxCount){
                maxCount = currCount;
                res = a[i-1];
            }
            currCount = 1;
        }
    }
    if (currCount > maxCount)
    {
        maxCount = currCount;
        res = a[n - 1];
    }
    printf("The element that appears most often in the array is %d with %d occurrences\n", res, maxCount);
}
int checkPrime(int n){
    if(n<=1)
        return 0;
    
    for(int i = 2; i<n/2; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int sumPrime(int a[100], int n){
    int prime_sum = 0;
    
    for(int i=0; i<n; i++)
        if(checkPrime(a[i])==1)
            prime_sum = prime_sum + a[i];
    return prime_sum;
}
void removeDuplicates(int a[100], int *n) {
    if (*n==0 || *n==1)
        return;
    
    int temp[*n];
    
    int j=0;
    for(int i=0; i<*n-1; i++)
        if(a[i] != a[i+1])
            temp[j++] = a[i];
    temp[j++] = a[*n-1];
    
    for(int i = 0; i<j; i++)
        a[i] = temp[i];
    
    *n = j;
}// Phải đi kèm với sắp xếp tăng dần hoặc giảm dần
void printArray (int a[100], int n){
    printf("The array after remove :");
    for(int i = 0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
}

