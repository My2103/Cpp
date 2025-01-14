//
//  main.cpp
//  string1
//
//  Created by Mai Ngoc Diem My on 18/06/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Enter your full name: ";
    string strName;
    getline(cin, strName);
    
    cout<<"Enter your address: ";
    string strAddress;
    getline(cin, strAddress);
    
    cout<<"Your name is "<<strName<<endl;
    cout<<"Your address is "<<strAddress<<endl;
    
    return 0;
}
