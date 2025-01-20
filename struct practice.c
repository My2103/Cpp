//
//  main.c
//  kkkkkk
//
//  Created by Mai Ngoc Diem My on 04/10/2023.
//

#include <stdio.h>
/*struct Student {
    char name[100];
    int id, age, grade;
};*/
/*struct Book {
    char title[100], author[100], publisher[100];
    int price;
};*/
/*struct Employee {
    char name[100], department[100];
    int id, salary;
};*/
/*struct Course {
    char name[100], instructor[100];
    int id, credit;
};*/
/*struct Invoice {
    char Customname[100], Productname[100];
    int id, quantity, price;
};*/
struct patient {
    char name[100], diagnosis[100];
    int id, age;
};
int main(int argc, const char * argv[]) {
    //Student
    /*struct Student st[10];
    int size;
    printf("Input the number of student :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input student %d\n", i);
        printf("Input name of student %d :", i);
        scanf(" %[^\n]s", st[i].name);
        printf("Input id of student %d :", i);
        scanf("%d", &st[i].id);
        printf("Input age of student %d :", i);
        scanf("%d", &st[i].age);
        printf("Input grade of student %d :", i);
        scanf("%d", &st[i].grade);
    }
    //output
    for(int i = 0; i<size; i++){
        printf("Student %d\n", i);
        printf("name : %s and id : %d and age : %d and grade : %d\n", st[i].name, st[i].id, st[i].age, st[i].grade);
    }*/
    
    //Book
    /*struct Book b[10];
    int size;
    printf("Input the number of book :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input book %d\n", i);
        printf("Input title of book %d :", i);
        scanf(" %[^\n]s", b[i].title);
        printf("Input the author of book %d :", i);
        scanf(" %[^\n]s", b[i].author);
        printf("Input the publisher of book %d :", i);
        scanf(" %[^\n]s", b[i].publisher);
        printf("Input the price of book %d :", i);
        scanf("%d", &b[i].price);
    }
    //output
    for(int i = 0; i<size; i++){
        printf("Book %d\n", i);
        printf("title : %s, author : %s, publisher : %s, price : %d\n", b[i].title, b[i].author, b[i].publisher, b[i].price );
    }*/
   
    //Employee
    /*struct Employee empl[10];
    int size;
    printf("Input the number of employee :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input employee %d :\n", i);
        printf("Input name of employee %d :", i);
        scanf(" %[^\n]", empl[i].name);
        printf("Input id of employee %d :", i);
        scanf("%d", &empl[i].id);
        printf("Input department of employee %d :", i);
        scanf(" %[^\n]", empl[i].department);
        printf("Input salary of employee %d :", i);
        scanf("%d", &empl[i].salary);
    }
    //output
    for(int i = 0; i<size; i++){
        printf("Employee %d\n", i);
        printf("name : %s, id : %d, department : %s, salary : %d\n", empl[i].name, empl[i].id, empl[i].department, empl[i].salary);
    }*/
    
    //Course
    /*struct Course cou[10];
    int size;
    printf("Input the number of course :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input course %d :\n", i);
        printf("Input name of course %d :", i);
        scanf(" %[^\n]", cou[i].name);
        printf("Input id of course %d :", i);
        scanf("%d", &cou[i].id);
        printf("Input instructor of course %d :", i);
        scanf(" %[^\n]", cou[i].instructor);
        printf("Input credit of course %d :", i);
        scanf("%d", &cou[i].credit);
    }
    //output
    for(int i = 0; i<size; i++){
        printf("course %d\n", i);
        printf("name : %s, id : %d, instructor : %s, credit : %d\n", cou[i].name, cou[i].id, cou[i].instructor, cou[i].credit);
    }*/
    
    //Invoice
    /*struct Invoice in[10];
    int size;
    printf("Input the number of invoice :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input invoice %d :\n", i);
        printf("Input id of invoice %d :", i);
        scanf("%d", &in[i].id);
        printf("Input product name of invoice %d :", i);
        scanf(" %[^\n]s", in[i].Productname);
        printf("Input customer name of invoice %d :", i);
        scanf(" %[^\n]s", in[i].Customname);
        printf("Input quantity of invoice %d :", i);
        scanf("%d", &in[i].quantity);
        printf("Input price of invoice %d :", i);
        scanf("%d", &in[i].price);
        
    }
    //output
    for(int i = 0; i<size; i++){
        printf("Invoice %d\n", i);
        printf("id : %d, product name : %s, customer name : %s, quantity : %d, price : %d\n", in[i].id, in[i].Productname, in[i].Customname, in[i].quantity, in[i].price);
    }*/
    
    //Patient
    struct patient pat[10];
    int size;
    printf("Input the number of patient :");
    scanf("%d", &size);
    //input
    for(int i = 0; i<size; i++){
        printf("Input patient %d :\n", i);
        printf("Input name of patient %d :", i);
        scanf(" %[^\n]s", pat[i].name);
        printf("Input age of patient %d :", i);
        scanf("%d", &pat[i].age);
        printf("Input id of patient %d :", i);
        scanf("%d", &pat[i].id);
        printf("Input diagnosis of patient %d :", i);
        scanf(" %[^\n]s", pat[i].diagnosis);
    }
    //output
    for(int i = 0; i<size; i++){
        printf("Patient %d\n", i);
        printf("name : %s, age : %d, id : %d, diagnosis : %s\n", pat[i].name, pat[i].age, pat[i].id, pat[i].diagnosis);
    }
    
    return 0;
}
