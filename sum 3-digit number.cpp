//
//  main.cpp
//  C+++++++
//
//  Created by Mai Ngoc Diem My on 09/05/2024.
//

#include <iostream>
 
using namespace std;

int main(int argc, const char * argv[]) {
    int n, a, b, c;
    
    cout << "Input your number: ";
    cin>>n;
    
    a =n/100;
    b =n/10%10;
    c =n%10;
    
    int sum = a + b + c;
    cout << "The sum is : " << sum << endl;
    
    return 0;
}

