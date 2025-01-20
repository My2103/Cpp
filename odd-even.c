//
//  main.c
//  if-swtich
//
//  Created by Mai Ngoc Diem My on 05/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    printf("Input your number here :");
    scanf("%d", &n);
    
    if(n % 2==0)
        printf("This number is even\n");
    else
        printf("This number id odd\n ");
    return 0;
}
