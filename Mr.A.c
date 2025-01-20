//
//  main.c
//  review lesson
//
//  Created by Mai Ngoc Diem My on 06/09/2023.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    char name[50];
    
    printf("Input your name here :");
    scanf("%49s", &name);
    
    printf("Welcome %s to procedural programming!\n", name);
    printf("In which, %s is the user input value\n", name);
    
    return 0;
    
}
