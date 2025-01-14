//
//  main.cpp
//  String
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int size = 128;
    char *name = new char [size];
    
    cout<<"Enter your name: ";
    cin.get(name, size+1);
    
    cout<<"Your name: "<< name;
    cout<<endl;
    return 0;
}
