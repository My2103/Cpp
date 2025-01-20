//
//  main.c
//  three intergers
//
//  Created by Mai Ngoc Diem My on 31/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    
    printf("Input the fisrt interger =");
    scanf ("%d", &a);
    
    printf ("Input the second interger =");
    scanf ("%d", &b);
    
    printf ("Input the third intereger =");
    scanf ("%d", &c);
    
    d=a>b?a:b;
    d=d>c?d:c;
    printf ("Max =%d\n", d);
    
    d=a<b?a:b;
    d=d<c?d:c;
    printf ("Min =%d\n", d);
    
    
     
    return 0;
}
