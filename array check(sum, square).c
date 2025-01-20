//
//  main.c
//  array check
//
//  Created by Mai Ngoc Diem My on 27/09/2023.
//

#include <stdio.h>
#include <math.h>
int checkSquarenumber (int c);
int main(int argc, const char * argv[]) {
    int n, i;
    
    printf("Input n =");
    scanf("%d", &n);
    
    int a[n];
    int sum = 0, negative_sum = 0;
    
    for(i=0; i<n; i++ ){
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%4d", a[i]);
        sum = sum + a[i];
        if(a[i] < 0){
            negative_sum = negative_sum + a[i];
        }
}
    printf("\nSum of all elements : %d\n", sum);
    printf("Sum of all negative elements : %d\n", negative_sum);
    
    for(i=0; i<n; i++){
        if(checkSquarenumber(a[i])){
            printf("%d is Square number\n", a[i]);
        }
    }
    return 0;
}
int checkSquarenumber (int c){
    float b = sqrt(c);
    if((int)b*(int)b==c)
        return 1;
    return 0;
}

