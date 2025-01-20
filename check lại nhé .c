//
//  main.c
//  yeyeyeye
//
//  Created by Mai Ngoc Diem My on 26/09/2023.
//

#include <stdio.h>
#include <math.h>
int checkSquareNumber(int c);
int main(int argc, const char * argv[]) {
    int n, sum = 0, i;
    
    printf("Input interger number :");
    scanf("%d", &n);
    
    int a[n];
    
    for(i = 0; i<n; i++){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i<n; i++){
        printf("%4d", a[i]);
        sum = sum + a[i];
}
    printf("Sum of elements : %d", sum);
    
    for(i = 0; i<n; i++){
        if(checkSquareNumber(a[i])){
            printf("%4d", a[i]);
        }
    }
    
    
    return 0;
}
int checkSquareNumber(int c){
    float b =sqrt(c);
    if((int)b*(int)b==c)
        return 1;
    return 0;
}
