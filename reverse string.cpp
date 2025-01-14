//
//  main.cpp
//  chill1
//
//  Created by Mai Ngoc Diem My on 12/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //Using reverse() function in C++
    string str;
    
    cout<<"Input your string: "; //Input a string
    cin>>str;
    
    reverse(str.begin(), str.end()); //reverse the string
    
    cout<<str<<endl;//output the string was reverse
    return 0;
}
