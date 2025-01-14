//
//  main.cpp
//  final2
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
void input (student a[100], int &size);
void output(student a[100], int size);
int main(int argc, const char * argv[]) {
    student a[100];
    int size;
    
    //Input the information of student:
    input(a, size);
    
    //Output the information of student
    cout<<"The information of all the student: "<<endl;
    output(a, size);
    
    return 0;
}//end main
void input (student a[100], int &size){
    cout<<"Enter the number of student: ";
    cin>>size;
    cout<<endl;
    
    for(int i = 0; i < size; i++){
        cout<<"Student "<<i<<endl;
        cout<<"ID: ";
        cin>>a[i].id;
        cin.ignore(32767, '\n');
        cout<<"Name: ";
        getline(cin, a[i].name);
        cout<<"Math: ";
        cin>>a[i].student_grade.math;
        cout<<"English: ";
        cin>>a[i].student_grade.english;
        cout<<endl;
    }
}//end input

void output(student a[100], int size){
    for(int i = 0; i < size; i++){
        cout<<"Student "<<i<<endl;
        cout<<"ID: "<<a[i].id<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Math: "<<a[i].student_grade.math<<endl;
        cout<<"English: "<<a[i].student_grade.english<<endl;
        cout<<endl;
    }
}

