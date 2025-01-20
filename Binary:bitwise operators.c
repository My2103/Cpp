//
//  main.c
//  practice
//
//  Created by Mai Ngoc Diem My on 03/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 5; //0101
    int y = 3; //0011
    //0001
    printf("%d\n", x & y);
    //0111
    printf("%d\n", x | y);
    //1010
    printf("%d\n", ~x);
    //0110
    printf("%d\n", x ^ y);
    

    return 0;
}
