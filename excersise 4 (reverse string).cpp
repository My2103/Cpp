//
//  main.cpp
//  Recursion practice (2)
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//

#include <iostream>
using namespace std;
void insertString (string &str);
string reverseString (string str);
int main(int argc, const char * argv[]) {
    string str;
    insertString(str);
    
    cout << "Reverse string: " << reverseString(str) << endl;
    
    return 0;
}

void insertString (string &str) {
    cout << "Enter a string to reverse: ";
    cin >> str;
}// input string

string reverseString (string str) {
    if (str.empty()) {
        return "";
    } else {
        return reverseString(str.substr(1)) + str[0];
    }
}// function reverse string
