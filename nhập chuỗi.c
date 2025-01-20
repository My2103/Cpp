//
//  main.c
//  xxxx
//
//  Created by Mai Ngoc Diem My on 04/10/2023.
//

#include <stdio.h>
struct Student
{
    char name[50];
    int id;
};
int main(int argc, const char * argv[])
{
    struct Student st[10];
    int size;
    printf("Input number student =");
    scanf("%d",&size);
//input
    for(int i=0;i<size;i++)
    {
     printf("Input student %d\n",i);
     printf("Input id of student %d =",i);
     scanf("%d",&st[i].id);
     fflush(stdin);
     printf("Input name of student %d =",i);
     scanf(" %[^\n]s",st[i].name);
 
    }
    for(int i=0;i<size;i++)
   {    printf("student %d\n",i);
       printf("id = %d and name = %s\n",st[i].id,st[i].name);
   }
return 0;

    }
