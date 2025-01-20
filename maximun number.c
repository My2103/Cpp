//
//  main.c
//  maximun intergers
//
//  Created by Mai Ngoc Diem My on 31/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    printf ("Input the first interger :");
    scanf ("%d", &a);
    
    printf ("Input the second interger :");
    scanf ("%d", &b);
     
    c=a>b?a:b;
    printf("Output max number =%d\n", c);
   
    

    
    
    return 0;
}
