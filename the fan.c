//
//  main.c
//  practice if
//
//  Created by Mai Ngoc Diem My on 05/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    printf("number =");
    scanf("%d", &n);
    
    switch(n)
    {
        case 0 :
            printf("The fan is off\n");
            break;
        case 1 :
            printf("The fan is running with speed one\n");
            break;
        case 2 :
            printf("The fan is running with speed two\n");
            break;
        case 3 :
            printf("The fan is running with speed three\n");
            break;
        default :
            printf("Invalid\n");
            break;
    }
    
    return 0;
}
