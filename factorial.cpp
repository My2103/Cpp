//
//  main.cpp
//  chill3
//
//  Created by Mai Ngoc Diem My on 12/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //indentify variables
    int number;
    long long factorial = 1;
    
    //Input number
    cout<<"Enter a positive interger: ";
    cin>>number;
    
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
    
    cout<<"Factorial of "<<number<<"="<< factorial<<endl;
    return 0;
}
