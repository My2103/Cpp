//
//  main.c
//  ôn típ thoii
//
//  Created by Mai Ngoc Diem My on 20/09/2023.
//

#include <stdio.h>
#include <math.h>
int checkSquare (int n);
void input(int* n);
int main(int argc, const char * argv[]) {
    int n;
    
    input(&n);
    if(checkSquare(n)==1)
        printf("%d is square number\n", n);
    else
        printf("%d is not square number\n", n);
    return 0;
}
int checkSquare (int n)
{
    float num =sqrt(n);
    if((int)num*(int)num==n)
        return 1;
    return 0;
}
void input(int* n)
{
    do{
        printf("input n =");
        scanf("%d", &*n);
    }while(n<=0);
}
