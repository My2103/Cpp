i//
//  main.c
//  MaiNgocDiemMy_ex1
//
//  Created by Mai Ngoc Diem My on 28/09/2023.
//

#include <stdio.h>
int checkPrime(int n);
int checkOdd(int n);
int checkNegative(int a[], int *n);
int countFrequency(int a[], int *n, int num);
void findMin(int a[], int n, int *min, int *index);
int main(int argc, const char * argv[]) {
    int n, i;
    
    printf("Input n =");
    scanf("%d", &n);
    
    int a[n];
    int sum = 0, prime_sum = 0;
    
    //sum all
    for(i=0; i<n; i++ ){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%4d", a[i]);
        sum = sum + a[i];
        }
    printf("\nSum of all elements : %d\n", sum);
    
    //minimun
    int min;
    min = a[0];
    
    for (i = 1; i<n; i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("The minimun number of array is %d\n", min);
    
    
    //sum prime
   for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (checkPrime(a[i])) {
                prime_sum = prime_sum + a[i];
            }
        }

        printf("Sum of prime numbers is %d\n", prime_sum);
    
    //odd
    int allOdd;
    for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (checkOdd(a[i])) {
                allOdd = 1;
                break;
            }
        }
    
    if (allOdd) 
    {
            printf("All numbers in the array are odd.\n");
        } 
    else
    {
       printf("Not all numbers in the array are odd.\n");
    }
    
    //negative array
    if (checkNegative(a, &n)) {
            printf("The array contains at least one negative number.\n");
        } else {
            printf("The array does not contain any negative numbers.\n");
        }
    
    //ferquency
    int num;
    printf("Enter the number to count its frequency\n");
        scanf("%d", &num);

        int frequency = countFrequency(a, &n, num);
        printf("The frequency of %d is %d.\n", num, frequency);
    
    //min
    int index;
    findMin(a, &n, &min, &index);
        printf("Minimum element is at index %d and its value is %d.\n", index, min);
    
    return 0;
    
}
//function
int checkPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int checkOdd(int n) {
    return n % 2 != 0;
}

int checkNegative(int a[], int *n) {
    for (int i = 0; i < *n; i++) {
        if (a[i] < 0) {
            return 1;
        }
    }
    return 0;
}

int countFrequency(int a[], int *n, int num) {
    int count = 0;
    for (int i = 0; i < *n; i++) {
        if (a[i] == num) {
            count++;
        }
    }
    return count;
}

//min
void findMin(int a[], int *n, int *min, int *index) {
    *min = a[0];
    *index = 0;
    for (int i = 1; i < *n; i++) {
        if (a[i] < *min) {
            *min = a[i];
            *index = i;
        }
    }
}

