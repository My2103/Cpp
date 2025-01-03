//
//  main.cpp
//  review c++ struct
//
//  Created by Mai Ngoc Diem My on 2/1/25.
//

#include <iostream>
using namespace std;
struct Student{
    int id;
    char name[50];
    double math;
    double english;
};
Student student;
int main(int argc, const char * argv[]) {
    
    //Input data
    cout << "ID: ";
    cin >> student.id;
    
    cout << "Name: ";
    cin.ignore();
    cin.getline(student.name, 50);
    
    cout << "Math: ";
    cin >> student.math;
    
    cout << "English: ";
    cin >> student.english;
    
    //Output data
    cout<< endl;
    
    cout << "The information of student: " << endl;
    cout << "ID: "<< student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Math: " << student.math << endl;
    cout << "English: " << student.english << endl;
    return 0;
}
