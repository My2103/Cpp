//
//  main.cpp
//  struct
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
using namespace std;
struct student {
    int age;
    string name;
};
void input (student &a);
void output (student a);
int main(int argc, const char * argv[]) {
    student a;
    student b;
    
    cout<<"Student A: "<<endl;
    input(a);
    
    cout<<"The information of student A: "<<endl;
    output(a);
    
    cout<<"Student B: "<<endl;
    input(b);
    
    cout<<"The information of student B: "<<endl;
    output(b);
    

    
    return 0;
}
void input (student &a){
    cout<<"Age: ";
    cin>>a.age;
    cin.ignore(32767, '\n');
    cout<<"Name: ";
    getline(cin, a.name);
    cout<<endl;
}

void output (student a){
    cout<<"Age: "<<a.age<<endl;
    cout<<"Name: "<<a.name<<endl;
    cout<<endl;
}


