//
//  main.cpp
//  final5
//
//  Created by Mai Ngoc Diem My on 19/06/2024.
//

#include <iostream>
using namespace std;
struct person {
    string name;
    int age;
    bool do_programming;
};
int birthday (int age);
int main(int argc, const char * argv[]) {
    person p1, p2;
    
    //Set the value for p1
    p1.name = "alice";
    p1.age = 20;
    p1.do_programming = true;
    
    //Set the value for p2
    p2.name = "bob";
    p2.age = 18;
    p2.do_programming = false;
    
    //Output the information
    cout<<p1.name<<"("<<birthday(p1.age)<<")"<<endl;
    cout<<p2.name<<"("<<birthday(p2.age)<<")"<<endl;
    
    return 0;
}

int birthday (int age){
    return ++age;
}
