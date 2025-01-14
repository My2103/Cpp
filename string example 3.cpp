//
//  main.cpp
//  string2
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int id;
    string name;
    
    cout<<"Input Id = ";
    cin>>id;
    cin.ignore(32767, '\n');//lệnh giải phóng bộ nhớ sau khi nhập số chuyển qua chuỗi
    
    
    cout<<"Input Name = ";
    getline(cin, name);
    cout<<"StudentID = "<<id<<endl;
    cout<<"Name = "<<name;
    cout<<endl;
    
    return 0;
}
