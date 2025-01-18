//
//  main.cpp
//  fix practice
//
//  Created by Mai Ngoc Diem My on 16/1/25.
//

#include <iostream>
using namespace std;
int prec (char c);
int main(int argc, const char * argv[]) {
    char o;
    
    o = '-';
    
    cout << prec(o) << endl;
    return 0;
}// main

//Function to return precedence of operators
int prec (char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}



