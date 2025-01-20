//
//  main.c
//  aaaaaaa
//
//  Created by Mai Ngoc Diem My on 02/10/2023.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void inputArray(int a[100], int*n);
void outputArray(int a[100], int n);
int sumArray(int a[100], int n);
void outputMinimum(int a[100], int n);
void outputMaximun(int a[100], int n);
//void sortAscendingArray(int a[100], int n);
//void invertArrat(int a[100], int n);
int checkAscending(int a[100], int n);
int countFrequency(int a[100], int n, int num);
int Average (int a[100], int n);
int checkPrime(int n);
void findPrime(int a[100], int n);
void deleteElement(int a[100], int*n, int pos);
int main(int argc, const char * argv[]) {
    int a[100], n, sum = 0;
    //input array
    inputArray(a, &n);
    outputArray(a, n);
    
    //sort array
    /*sortAscendingArray(a, n);
    printf("Array after sort :");
    for(int i=0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");*/
    
    //invert array
    /*invertArrat(a, n);
    printf("Array after invert :");
    for(int i=0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");*/
    
    //sum
    sum = sumArray(a, n);
    printf("The sum of all elements of array is %d\n", sum);
    
    //output max min
    outputMinimum(a, n);
    outputMaximun(a, n);
    
    //check Ascending
    if(checkAscending(a,n)==1){
        printf("This array is ascending.\n");
    }
    else {
        printf("This array is not ascending.\n");
    }
    
    //Frequency
    int frequency, num;
    printf("Enter a number to count its frequency :");
    scanf("%d", &num);
    
    frequency = countFrequency(a, n, num);
    
    printf("The frequency of %d is : %d\n", num, frequency);
    
    //mean
    printf("The mean of all elements of array is %d\n", Average(a, n));
    
    //checkPrime
    findPrime(a, n);
    
    //delete Element
    int pos;
    printf("Enter the location of the element to delete :");
    scanf("%d", &pos);
    
    deleteElement(a, &n, pos);
    
    printf("Array after delete elements :\n");
    for(int i = 0; i<n; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
    
    
    return 0;
}
void inputArray(int a[100], int*n){
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
int sumArray(int a[100], int n){
    int sum = 0, i;
    for (i=0; i<n; i++){
        sum = sum + a[i];
    }
    return sum;
}
void outputMinimum(int a[100], int n){
    int min = a[0];
    int minIndex = 0;
    
    for(int i=1; i<n; i++){
        if(a[i]<min){
            min=a[i];
            minIndex = i;
        }
    }
    printf("The minimum number of array is %d\n", min);
    printf("The index is %d\n", minIndex);
}
void outputMaximun(int a[100], int n){
    int max = a[0];
    int maxIndex = 0;
    
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
            maxIndex = i;
        }
    }
    printf("The maximun number of array is %d\n", max);
    printf("The index is %d\n", maxIndex);
}
/*void swap (int*x, int*y){
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
}*/
/*void sortAscendingArray(int a[100], int n){
    for(int i = 0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
                swap(&a[i], &a[j]);
}*/
/*void invertArrat(int a[100], int n){
    for(int i = 0; i<n; i++)
      for(int j=i+1; j<n; j++)
          if(a[i]<a[j])
              swap(&a[i], &a[j]);
}*/
int checkAscending(int a[100], int n){
    for(int i =0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j]+1)
                return 0;
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
int Average(int a[100], int n){
    int mean_sum = 0;
    
    for(int i=0; i<n; i++){
        mean_sum = mean_sum + a[i];
    }
    return (float)mean_sum/n;
}
int checkPrime(int n){
    if(n<=1)
        return 0;
    for(int i =2; i<n/2; i++)
        if(n%i==0)
            return 0;
    return 1;
}
void findPrime(int a[100], int n){
    printf("The prime number in array is: ");
        for(int i = 0; i < n; i++) {
            if(checkPrime(a[i])) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
void deleteElement(int a[100], int*n, int pos){
    if(pos<0 || pos >=*n){
        printf("Invalid location.\n");
        return;
    }
    for(int i = pos; i< *n-1; i++){
        a[i] = a[i+1];
    }
    (*n)--;
}
