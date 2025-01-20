//
//  main.c
//  play
//
//  Created by Mai Ngoc Diem My on 03/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, a, c;
    
    
    printf("Put your interger here :");
    scanf("%d", &n);
    
    a= n/100;
    c= n%10;
    
    if (a==c)
    {
        printf("This is symetric\n");
    }
    else
    {
        printf("This is not symetric\n");
    }
    
    return 0;
}
