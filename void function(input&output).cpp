//
//  main.cpp
//  function
//
//  Created by Mai Ngoc Diem My on 28/05/2024.
//

#include <iostream>
using namespace std;
void input (int &n);
void ouput (int n);
int main(int argc, const char * argv[]) {
    int n;
    
    input(n);
    ouput(n);
    return 0;
} //end main

//Take an integer number form user and output
void input (int &n) {
    cout<<"Input n =";
    cin>>n;
}//end void input

void ouput (int n) {
    cout<<"You input n = "<<n<<endl;
}//end void output
