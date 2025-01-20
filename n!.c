//
//  main.c
//  practice
//
//  Created by Mai Ngoc Diem My on 08/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n;
    
    printf("Input your number here :");
    scanf("%d", &n);
    
    int sum = 0;
    
    for( i = 1; i<=n; i++)
        sum = sum + i;
    
    for( i = 1; i<n; i++ )
        printf("%d+", i);
        printf("%d=%d", n, sum);
    
    return 0;
}
