a//
//  main.c
//  array nữa nè
//
//  Created by Mai Ngoc Diem My on 28/09/2023.
//

// insert code here...
#include <stdio.h>
void inputArray(int a[100], int* n);
void outputArray(int a[100],int n);
void swap(int*x, int*y);
void sortAscendingArray (int a[100], int n);
int main(int argc, const char * argv[]) {
    int a[100];
    int n;
    int i;
    
    inputArray(a, &n);
    outputArray(a, n);
    sortAscendingArray(a, n);
    
    printf("Array after sort: ");
       for(int i=0; i<n; i++)
           printf("%d ", a[i]);
       printf("\n");
    
   int max;
    max = a[0];
    
    for (i = 1; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("\nThe maximun number of array is %d\n", max);
    
    int min;
    min = a[0];
    
    for (i = 1; i<n; i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("The minimun number of array is %d\n", min);
    
    int negative_max;
    negative_max = 0;
    
    for(i = 0; i<n; i++){
        if(a[i]<0)
            if(negative_max==0 || negative_max < a[i])
                negative_max = a[i];
    }
    if(negative_max==0){
        printf("This array not have negative number\n");
    }
    else
        printf("The maximun negative number is : %d\n", negative_max);
    
    int negative_min;
    negative_min = 0;
    
    for(i = 0; i<n; i++){
        if(a[i]<0)
            if(negative_min==0 || negative_min > a[i])
                negative_min = a[i];
    }
    if(negative_min==0){
        printf("This array not have negative number\n");
    }
    else
        printf("The minimum negative number is : %d\n", negative_min);
    
    
    
    return 0;
}
void inputArray(int a[100], int* n)
{
    printf("input n=");
    scanf("%d",&*n);
    
for(int i=0;i<*n;i++) {
        printf("input a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void outputArray(int a[100],int n) {
    printf("Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}
void swap(int*x, int*y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void sortAscendingArray (int a[100], int n)
{
    for(int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if(a[i]>a[j])
                swap(&a[i], &a[j]);
}
