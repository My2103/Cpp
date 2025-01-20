//
//  main.c
//  nnnnnn
//
//  Created by Mai Ngoc Diem My on 05/10/2023.
//

#include <stdio.h>
#include <math.h>
struct factor{
    int num;
    int den;
};
int main(int argc, const char * argv[]) {
    struct factor f1, f2, f3;
    
    //factor 1
    printf("Factor 1 :\n");
    printf("Input numerator :");
    scanf("%d", &f1.num);
    fflush(stdin);
    printf("Input denominator :");
    scanf("%d", &f1.den);
    
    //factor 2
    printf("Factor 2 :\n");
    printf("Input numerator :");
    scanf("%d", &f2.num);
    fflush(stdin);
    printf("Input denominator :");
    scanf("%d", &f2.den);
    
    //output
    int numerator_sum = (f1.num*f2.den + f2.num*f1.den);
    printf("The sum of numerator :%d\n", numerator_sum);
    int denominator_sum = f1.den*f2.den;
    printf("The sum of denominator :%d\n", denominator_sum);
    
    int numerator_subtract = (f1.num*f2.den - f2.num*f1.den);
    printf("The subtract of numerator :%d\n", numerator_subtract);
    int denominator_subtract = f1.den*f2.den;
    printf("The subtract of denominator :%d\n", denominator_subtract);
    
    int numerator_mutiply = f1.num*f2.num;
    printf("The mutiply of numerator :%d\n", numerator_mutiply);
    int denomirator_mutiply = f1.den*f2.den;
    printf("The mutiply of denominator :%d\n", denomirator_mutiply);
    
    int numerator_divide = f1.num*f2.den;
    printf("The divide of numerator :%d\n", numerator_divide);
    int denomirator_divide = f1.den*f2.num;
    printf("The divide of denominator :%d\n", denomirator_divide);
    
  
    
    
    return 0;
}
