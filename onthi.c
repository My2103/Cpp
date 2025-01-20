//
//  main.c
//  tieepd
//
//  Created by Mai Ngoc Diem My on 21/09/2023.
//

#include <stdio.h>
#include <math.h>
void input(int* n);
int checkSquare (int n);
void printSquareNumber(int n);
void n_square_numbers(int n);
int checkPrime(int n);
int main(int argc, const char * argv[]) {
    int n;
    
    //call n
    input(&n);
    
    //checkSquare
    if(checkSquare(n)==1)
        printf("%d is square number\n", n);
    else
        printf("%d is not square number\n", n);
    
    //Exercise 3
    printf("Output all elements are square number : ");
    printSquareNumber(n);
    
    //Exercise 4
    printf("Output n Square number : ");
    n_square_numbers(n);
    
    //Exercise 5
    if(checkPrime(n)==1)
        printf("The number %d is prime number", n);
    else
        printf("The number %d is not prime number\n", n);
    
    return 0;
    
}
//void
void input(int* n)
{
  printf("input n =");
  scanf("%d", &*n);
}
//function checkSquare
int checkSquare (int n)
{
    float n1 =sqrt(n);
    if((int)n1*(int)n1==n)
        return 1;
    return 0;
}
//function 3
void printSquareNumber(int n)
{
    int i = 1;
    for (i=1; i*i<=n; i++) {
        printf("%d ", i*i);
    }
}
//function 4
void n_square_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i*i);
     }
}
//function 5
int checkPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

    

