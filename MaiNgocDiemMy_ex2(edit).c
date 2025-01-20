//
//  main.c
//  final test 22
//
//  Created by Mai Ngoc Diem My on 05/10/2023.
//

#include <stdio.h>
struct Student {
    int id, math, english;
};
int main(int argc, const char * argv[]) {
    //Student
    struct Student st[10];
    int size;
    
        printf("Input the number of student :");
        scanf("%d", &size);
    
    while(size<0){
        printf("Input the number of student :");
        scanf("%d", &size);
    }
    
    //input
    for(int i = 0; i<size; i++){
        printf("Input student %d\n", i);
        printf("Input id of student %d :", i);
        scanf("%d", &st[i].id);
        printf("Input math of student %d :", i);
        scanf("%d", &st[i].math);
        printf("Input english of student %d :", i);
        scanf("%d", &st[i].english);
    }
    
    //output
    for(int i = 0; i<size; i++){
        printf("Student %d\n", i);
        printf("id : %d\n", st[i].id);
        printf("math : %d\n", st[i].math);
        printf("english : %d\n", st[i].english);
        printf("average : %f\n", (float)(st[i].math + st[i].english)/2);
    }
    
    //largest
    int index = 0;
    float max = (float)(st[0].math + st[0].english)/2;
    
    for(int i = 1; i<size; i++){
        if((float)(st[i].math + st[i].english)/2 > max){
            max = (st[i].math + st[i].english)/2;
            index = i;
        }
        printf("The student %d has largest average is %f", index, max);
    }
    
    return 0;
}

