//
//  main.cpp
//  final1
//
//  Created by Mai Ngoc Diem My on 19/06/2024.
//

#include <iostream>
using namespace std;
struct grade {
    double math;
    double english;
};

struct student {
    int id;
    string name;
    grade student_grade;
};
void input (student &a);
void output (student a);
int main(int argc, const char * argv[]) {
    student a;
    
    //Input the information of student
    cout<<"Enter the information of student A: "<<endl;
    input(a);
    cout<<endl;
    
    //Output the information of student
    cout<<"The information of student A: "<<endl;
    output(a);
    
    return 0;
}//end main

void input (student &a){
    cout<<"ID: ";
    cin>>a.id;
    cin.ignore(32767, '\n');
    
    cout<<"Name: ";
    getline(cin, a.name);
    
    cout<<"Math: ";
    cin>>a.student_grade.math;
    
    cout<<"English: ";
    cin>>a.student_grade.english;
}//end input

void output (student a){
    cout<<"ID: "<<a.id<<endl;
    cout<<"Name: "<<a.name<<endl;
    cout<<"Math: "<<a.student_grade.math<<endl;
    cout<<"English: "<<a.student_grade.english<<endl;
}




