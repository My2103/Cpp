//
//  main.c
//  practice
//
//  Created by Mai Ngoc Diem My on 03/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, a, b, c, d;
    
    printf("Input your number here :");
    scanf("%d\n", &n);
    
    a = n/1000;
    b = n/100%10;
    c = n/10%10;
    d = n%10;
    
    if(a==d, b==c)
    {
        printf("This is symetric\n");
    }
    else
    {
        printf("This is not symetric\n");
    }
    return 0;
}
