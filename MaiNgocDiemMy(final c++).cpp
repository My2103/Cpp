//
//  main.cpp
//  final test
//
//  Created by Mai Ngoc Diem My on 20/06/2024.
//

#include <iostream>
using namespace std;
struct grade {
    double math;
    double english;
    double it;
};
struct student {
    string id;
    string name;
    grade student_grade;
};
void input (student a[100], int &size);
void output(student a[100], int size);
double caculateAverage (grade student_grade);
void outputAverage (student a[100], int size);
void outputMaxAverage (student a[100], int size);
void outputITGrade (student a[100], int size);
void swap (int &x, int &y);
void listSwap (student a[100], int size);
void outputListSwap (student a[100], int size);
void deleteItem (student a[100], int &size, int &position);
int main(int argc, const char * argv[]) {
    student a[100];
    int size;
    int position;
    
    //Input the information of student (question 2)
    input(a, size);
    
    //Output the information of student (question 2)
    cout<<"The information of all the students: "<<endl;
    output(a, size);
    
    //Display the student list with average grade (question 3)
    cout<<"The average grade of students: "<<endl;
    outputAverage (a, size);
    
    //Display the student have max average (question 4)
    outputMaxAverage(a, size);
    
    //Sort student list ascending average grade (question 6)
    listSwap(a, size);
    outputListSwap(a, size);
    
    //Output IT grade the (question 5)
    outputITGrade(a, size);
    
    //Delete an item (question 7)
    deleteItem(a, size, position);
    
    return 0;
}//end main

void input (student a[100], int &size){
    cout<<"Enter the number of student: ";
    cin>>size;
    cout<<endl;
    
    cin.ignore(32767, '\n');
    
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
        cout<<"IT: ";
        cin>>a[i].student_grade.it;
        cout<<endl;
    }
}//end input (question 2)

void output(student a[100], int size){
    for(int i = 0; i < size; i++){
        cout<<"Student "<<i<<endl;
        cout<<"ID: "<<a[i].id<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Math: "<<a[i].student_grade.math<<endl;
        cout<<"English: "<<a[i].student_grade.english<<endl;
        cout<<"IT: "<<a[i].student_grade.it<<endl;
        cout<<endl;
    }
}//end output (question 2)

double caculateAverage (grade student_grade){
    return ((student_grade.math + student_grade.english + student_grade.it)/3);
}//end caculate average

void outputAverage (student a[100], int size){
    for(int i = 0; i < size; i++){
        cout<<"Student "<<i<<endl;
        cout<<"ID: "<<a[i].id<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Math: "<<a[i].student_grade.math<<endl;
        cout<<"English: "<<a[i].student_grade.english<<endl;
        cout<<"IT: "<<a[i].student_grade.it<<endl;
        cout<<"Average grade: "<<caculateAverage(a[i].student_grade)<<endl;
        cout<<endl;
    }
}//end output average (question 3)

void outputMaxAverage (student a[100], int size){
    double maxAverage = -1.0;
    int indexMax = -1;
    for(int i = 0; i < size; i++){
        double currentAverage = caculateAverage(a[i].student_grade);
        if (currentAverage > maxAverage) {
                maxAverage = currentAverage;
                indexMax = i;
            }
    }
    if(indexMax != -1){
        cout<<"The student have largest average: "<<endl;
        cout<<"ID: "<<a[indexMax].id<<endl;
        cout<<"Name: "<<a[indexMax].name<<endl;
        cout<<"Math: "<<a[indexMax].student_grade.math<<endl;
        cout<<"English: "<<a[indexMax].student_grade.english<<endl;
        cout<<"IT: "<<a[indexMax].student_grade.it<<endl;
        cout<<"Average grade: "<<maxAverage<<endl;
    }
}//end output max average (question 4)

void outputITGrade (student a[100], int size){
    double number;
    cout<<"\nEnter the grade of IT: ";
    cin>>number;
    
    bool found = false;
    
    for(int i = 0; i < size; i++){
        if(a[i].student_grade.it == number){
            cout<<"Student "<<i<<endl;
            cout<<"ID: "<<a[i].id<<endl;
            cout<<"Name: "<<a[i].name<<endl;
            cout<<"Math: "<<a[i].student_grade.math<<endl;
            cout<<"English: "<<a[i].student_grade.english<<endl;
            cout<<"IT: "<<a[i].student_grade.it<<endl;
            cout<<"Average grade: "<<caculateAverage(a[i].student_grade)<<endl;
            cout<<endl;
            found = true;
        }
    }
    if (!found) {
            cout << "There is no student matching this grade." << endl;
        }
    
}//end output IT grade (question 5)

void swap (int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}//end swap

void listSwap (student a[100], int size){
    for(int i = 0; i < size -1; i++){
        for (int j = i+1; j < size; j++){
            if(caculateAverage(a[i].student_grade) > caculateAverage(a[j].student_grade))
                swap(a[i], a[j]);
        }
    }
}//end list swap

void outputListSwap (student a[100], int size){
    cout<<"\nThe student list after sort ascending average grade is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<"Student "<<i<<endl;
        cout<<"ID: "<<a[i].id<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Math: "<<a[i].student_grade.math<<endl;
        cout<<"English: "<<a[i].student_grade.english<<endl;
        cout<<"IT: "<<a[i].student_grade.it<<endl;
        cout<<"Average grade: "<<caculateAverage(a[i].student_grade)<<endl;
        cout<<endl;
    }
}//end output list swap (question 6)

void deleteItem (student a[100], int &size, int &position){
    cout<<"Enter the position at which to delete the item: ";
    cin>>position;
    
    for(int i = position; i < size - 1; i++){
        a[i] = a[i + 1];
    }
    size--;
    
    cout<<"\nThe array after delete the position "<<position<<" is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<"\nStudent "<<i<<endl;
        cout<<"ID: "<<a[i].id<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<"Math: "<<a[i].student_grade.math<<endl;
        cout<<"English: "<<a[i].student_grade.english<<endl;
        cout<<"IT: "<<a[i].student_grade.it<<endl;
        cout<<"Average grade: "<<caculateAverage(a[i].student_grade)<<endl;
    }
    cout<<endl;
}//end  delete item (question 7)

