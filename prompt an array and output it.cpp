//
//  main.cpp
//  luyen thi
//
//  Created by Mai Ngoc Diem My on 18/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //Prompt the size of the array form user
    int size; //Declare variable size
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    //Prompt the array from user
    int myArray[size]; //Declare variable array
    cout<<"Enter "<<size<<" interger:";
    for (int i = 0; i < size; ++i) {
        cin>>myArray[i];
    }
    
    //Output the array
    cout<<"Array elements are: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<i<<" = "<<myArray[i]<<endl;
    }
     
     cout<<endl;
    
    
    return 0;
}
