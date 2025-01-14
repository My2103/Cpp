//
//  main.cpp
//  do while
//
//  Created by Mai Ngoc Diem My on 23/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number;
    
    cout<<"Enter the number: ";
    cin>>number;
    
    /*do {
        cout<<"Enter the number: ";
        cin>>number;
    } while (number<0);
        
        cout<<number<<endl;*/
    
    while (number<0){
        cout<<"Enter the number: ";
        cin>>number;
    }
    
    cout<<number<<endl;
    return 0;
}
