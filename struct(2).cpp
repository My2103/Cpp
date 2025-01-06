//
//  main.cpp
//  review c++
//
//  Created by Mai Ngoc Diem My on 6/1/25.
//

#include <iostream>
using namespace std;
struct student {
    int id;
    string name;
    double math;
    double english;
};
student s;
void inputOneStudent (student &s);
void outputOneStudent (student s);
void inputStudent (student a[100], int &size);
void outputStudent (student a[100], int size);
int main(int argc, const char * argv[]) {
    student s;
    student a[100];
    int size;
    
    inputOneStudent(s);
    outputOneStudent(s);
    inputStudent (a, size);
    outputStudent (a, size);
    return 0;
}// main

//Display information of one student
void inputOneStudent (student &s) {
    cout << "ID: ";
    cin >> s.id;
    
    cout << "Name: ";
    cin.ignore();
    getline(cin, s.name);
    
    cout << "Math score: ";
    cin >> s.math;
    
    cout << "English score: ";
    cin >> s.english;
}// inputOneStudent

void outputOneStudent (student s) {
    cout << "\nThe information of student: ";
    
    cout << "\nID: " << s.id;
    cout << "\nName: " << s.name;
    cout << "\nMath score: " << s.math;
    cout << "\nEnglish score: " << s.english;
    cout << endl;
}// outputOneStudent

//Display information of n student
void inputStudent (student a[100], int &size) {
    cout << "\nEnter the number of student: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Student " << i << endl;
        
        cout << "ID: ";
        cin >> a[i].id;
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, a[i].name);
        
        cout << "Math score: ";
        cin >> a[i].math;
        
        cout << "English score: ";
        cin >> a[i].english;
        
        cout << endl;
    }
}// input n student

void outputStudent (student a[100], int size) {
    cout << "The information of students: " << endl;
    
    for (int i = 0; i < size; i++) {
        cout << "Student " << i;
        cout << "\nID: " << a[i].id;
        cout << "\nName: " << a[i].name;
        cout << "\nMath score: " << a[i].math;
        cout << "\nEnglish score: " << a[i].english << endl;
        cout << endl;
    }
}// output n student
