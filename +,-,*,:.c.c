//
//  main.c
//  practice if
//
//  Created by Mai Ngoc Diem My on 05/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char c;
    
    printf("Input operator (+,-,*,/) :");
    scanf("%c", &c);
    
    printf("a =");
    scanf("%d", &a);
    
    printf("b =");
    scanf("%d", &b);
    
    
    
    switch(c)
    {
        case '+' :
            printf("a+b =%d\n", a+b);
            break;
        case '-' :
            printf("a-b =%d\n", a-b);
            break;
        case '*' :
            printf("a*b =%d\n", a*b);
            break;
        case '/' :
            printf("a/b =%f\n", (float)a/b);
            break;
        default :
            printf("Invalid");
            break;
    }
    
           
    return 0;
}
