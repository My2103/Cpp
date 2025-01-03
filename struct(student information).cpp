//
//  main.cpp
//  review c++ struct
//
//  Created by Mai Ngoc Diem My on 3/1/25.
//

#include <iostream>
using namespace std;
struct student {
    int id;
    string name;
    double math;
    double english;
};
void input (student a[100], int &size);
void output (student a[100], int size);
int main(int argc, const char * argv[]) {
    student a[100];
    int size;
    
    //Input information of student
    input(a, size);
    
    //Output the information of student
    cout << "The information of all student: " << endl;
    output(a, size);
    
    return 0;
}// end main
void input (student a[100], int &size) {
    cout << "Enter the number of student: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Student " << i << endl;
        
        cout << "ID: ";
        cin >> a[i].id;
        
        cout << "Name: ";
        cin >> a[i].name;
        
        cout << "Math score: ";
        cin >> a[i].math;
        
        cout << "English score: ";
        cin >> a[i].english;
        
        cout << endl;
    }
}// input student

void output (student a[100], int size) {
    for (int i = 0; i < size; i++){
        cout << "Student " << i << endl;
        cout << "ID: " << a[i].id << endl;
        cout << "Name: " << a[i].name << endl;
        cout << "Math score: " << a[i].math << endl;
        cout << "English score: " << a[i].english << endl;
        cout << endl;
    }
}// output student
