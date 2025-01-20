//
//  main.c
//  final test 3
//
//  Created by Mai Ngoc Diem My on 05/10/2023.
//

#include <stdio.h>
void inputArray(int a[100], int*n);
void outputArray(int a[100], int n);
int sumPerfectnumber (int a[100], int n);
int checkanyPefectnumber(int a[100], int n);
int checkPerfectnumber (int n);
int checkallPefectnumber(int a[100], int n);
int main(int argc, const char * argv[]) {
    int a[100], n;
    //input array
    inputArray(a, &n);
    outputArray(a, n);
    
    //perfect sum
    int perfect_sum;
    perfect_sum = sumPerfectnumber(a, n);
    printf("The sum of all Perfect number is %d\n", perfect_sum);
    
    //check perfect
    if(checkanyPefectnumber(a, n)==1){
        printf("The array has at least one perfect number.\n");
    }
    else{
        printf("The array do not have anny perfect number.\n");
    }
    
    if(checkallPefectnumber(a, n)==1){
        printf("The array all perfect number.\n");
    }
    else{
        printf("The array not all perfect number.\n");
    }
    
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
int sumPerfectnumber (int a[100], int n){
    int perfect_sum = 0;
    
    for(int i=0; i<n; i++){
        if(checkPerfectnumber(a[i])){
            perfect_sum = perfect_sum + a[i];
        }
    }
    return perfect_sum;
}
int checkanyPefectnumber(int a[100], int n){
    for(int i=0; i<n; i++){
        if(checkPerfectnumber(a[i]))
            return 1;
    }
   
    return 0;
}
int checkallPefectnumber(int a[100], int n){
    for(int i=0; i<n; i++){
        if(!checkPerfectnumber(a[i]))
            return 0;
    }
   
    return 1;
}

