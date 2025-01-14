//
//  main.cpp
//  struct1
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
#include <string>
using namespace std;
struct student {
    int age;
    string name;
};
void input (student a[100], int &n);
void output (student a[100], int n);
int main(int argc, const char * argv[]) {
    student a[100];
    int n;
    
    input(a, n);
    output(a, n); 
    
    return 0;
}
void input (student a[100], int &n){
    cout<<"Enter number of student: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Age: ";
        cin>>a[i].age;
        cin.ignore(32767, '\n');
        cout<<"Name: ";
        getline(cin, a[i].name);
        cout<<endl;
    }
}

void output (student a[100], int n){
    for(int i = 0; i < n; i++){
        cout<<"Age: "<<a[i].age<<endl;
        cout<<"Name: "<<a[i].name<<endl;
        cout<<endl;
    }
}


