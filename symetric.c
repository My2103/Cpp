//
//  main.c
//  If-statement
//
//  Created by Mai Ngoc Diem My on 31/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int a= n /100;
    int b= n/10%10;
    int c= n%10;
  
  
    
    printf("Put your interger here :");
    scanf("%d", &n);
    
    if (a==c)
    {
        printf("This is symetric");
    }
    else
    {
        printf("This is not symetric");
    }
    

    
    return 0;
}
