//
//  main.c
//  MaiNgocDiemMytest2
//
//  Created by Mai Ngoc Diem My on 26/09/2023.
//

#include <stdio.h>
#include <stdlib.h>
int findLargestnumber (int a, int b, int c);
int findsmallestnumber (int a, int b, int c);
int main(int argc, const char * argv[]) {
    int a, b, c;
    
    printf("Input interger number :");
    scanf("%d", &a);
    
    printf("Input interger number :");
    scanf("%d", &b);
    
    printf("Input interger number :");
    scanf("%d", &c);
    
    int largest = findLargestnumber(a, b, c);
    printf("The largest number is %d\n", largest);
    
    int smallest = findsmallestnumber(a, b, c);
    printf("The smallest number is %d\n", smallest);
    
    return(EXIT_SUCCESS);
}
int findLargestnumber (int a, int b, int c){
    return (a>b) ? (a>c ? a:c) : (b>c ? b:c);
}
int findsmallestnumber (int a, int b, int c){
    return (a<b) ? (a<c ? a:c) : (b<c ? b:c);
}
