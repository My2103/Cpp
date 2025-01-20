//
//  main.c
//  If-statement
//
//  Created by Mai Ngoc Diem My on 31/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    printf("Input your grade :");
    scanf("%d", &x);
    
    if(x>=5)
    {
        printf("You passed\n");
    }
    else
    {
        printf("You failed\n");
    }
    return 0;
}
