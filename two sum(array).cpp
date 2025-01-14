//
//  main.cpp
//  luyen thi1
//
//  Created by Mai Ngoc Diem My on 18/05/2024.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //Prompt the size form user
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    
    //Promt the array from user
    int myArray[size];
    cout<<"Enter "<<size<<" integers:";
    for (int i = 0; i < size; ++i){
        cin>>myArray[i];
    }
    
    //Output the array
    cout<<"Array elements are: "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<i<<" = "<<myArray[i]<<endl;
    }
    
    //Prompt the target from user
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    
    //Output the number that add together equal target
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j){
            if (myArray[i] + myArray[j] == target) {
                cout<<"Pairs of elements that add up to the target: "<<"{"<< i << "," << j <<"}"<< endl;
            }
        }
    }
    
    cout<<endl;
    return 0;
}
