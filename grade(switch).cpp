//
//  main.cpp
//  16
//
//  Created by Mai Ngoc Diem My on 16/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char grade;
    
    cout<<"Input your grade: ";
    cin>>grade;
    
    switch (grade) {
        case 'A':
            cout<<"The grade point is 4.0"<<endl;
            break;
        case 'B':
            cout<<"The grade point is 3.0"<<endl;
            break;
        case 'C':
            cout<<"The grade point is 2.0"<<endl;
            break;
        case 'D':
            cout<<"The grade point is 1.0"<<endl;
            break;
        case 'F':
            cout<<"The grade point is 0.0"<<endl;
            break;
        default:
            cout<<"Invalid"<<endl;
            break;
    }
    
    return 0;
}
