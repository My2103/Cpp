//
//  main.cpp
//  struct assignment
//
//  Created by Mai Ngoc Diem My on 6/1/25.
//

#define MAX 100
#include <iostream>
using namespace std;
struct student {
    int id;
    string name;
}; student s;

struct grade {
    double math;
    double english;
}; grade student_grade;
void getStudent (student s[MAX], grade student_grade[MAX], int &size);
void printStudent (student s[MAX], grade student_grade[MAX], int size);
void printAverageGrade (student s[MAX], grade student_grade[MAX], int size);
void findHighestAverage (student s[MAX], grade student_grade[MAX], int size);
int main(int argc, const char * argv[]) {
    student s[MAX];
    grade student_grade[MAX];
    int size;
    
    getStudent(s, student_grade, size);
    printStudent(s, student_grade, size);
    printAverageGrade (s, student_grade, size);
    findHighestAverage(s, student_grade, size);
    
    return 0;
}// main
void getStudent (student s[MAX], grade student_grade[MAX], int &size) {
    cout << "Enter the number of student: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Student " << i << ":" << endl;
        
        cout << "ID: ";
        cin >> s[i].id;
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, s[i].name);
        
        cout << "Math grade: ";
        cin >> student_grade[i].math;
        
        cout << "English grade: ";
        cin >> student_grade[i].english;
        
        cout << endl;
    }
}// getStudent

void printStudent (student s[MAX], grade student_grade[MAX], int size) {
    cout << "\nThe grade of the students: " << endl;
    
    for (int i = 0; i < size; i++) {
        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Math grade: " << student_grade[i].math << endl;
        cout << "English grade: " << student_grade[i].english << endl;
        cout << endl;
    }
}// printStudent

void printAverageGrade (student s[MAX], grade student_grade[MAX], int size) {
    cout << "The average grade of students: " << endl;
    
    for (int i = 0; i < size; i++) {
        double average_grade = (student_grade[i].math + student_grade[i].english)/2.0;
        
        cout << "ID: " << s[i].id << endl;
        cout << "Average grade: " << average_grade << endl;
        cout << endl;
    }
}// print Average

void findHighestAverage (student s[MAX], grade student_grade[MAX], int size) {
    cout << "The student has the highest average grade is: " << endl;
    
    int highestIndex = 0;
    double max_average;
    max_average = (student_grade[0].math + student_grade[0].english)/2.0;
    
    for (int i = 1; i < size; i++) {
        double average_grade = (student_grade[i].math + student_grade[i].english)/2.0;
        
        if (average_grade > max_average) {
            max_average = average_grade;
            highestIndex = i;
        }
    }// end loop
    
    cout << "ID: " << s[highestIndex].id << endl;
    cout << "Name: " << s[highestIndex].name << endl;
    cout << "Average grade: " << max_average << endl;
    
    
}// findHighestAverage
