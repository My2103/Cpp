//
//  main.cpp
//  array
//
//  Created by Mai Ngoc Diem My on 04/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int a[100], int &size);
void printArray (int a[100], int size);
int sum (int a[100], int size);
int sumEvenValue (int a[100], int size);
int sumIndex (int a[100], int size);
int main(int argc, const char * argv[]) {
    /*int a[100], size;
    
    float a[100];
    int size;
    
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    
    cout<<"Your array: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    int a[100], size;
    
    getArray(a, size);
    
    printArray(a, size);
    
    //Sum all values
    cout<<"The sum of all values in the array = "<<sum(a, size)<<endl;
    
    //Sum all even values
    cout<<"The sum of all even values in the array = "<<sumEvenValue(a, size)<<endl;
    
    //Sum index
    cout<<"The sum of all even index in the array = "<<sumIndex(a, size)<<endl;
    
    return 0;
}

void getArray (int a[100], int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}

void printArray (int a[100], int size){
    cout<<"Your array: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int sum (int a[100], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

int checkEven(int number){
    if(number%2==0){
        return 1;
    } else {
        return 0;
    }
}

int sumEvenValue (int a[100], int size){
    int sum_even_value = 0;
    for(int i = 0; i < size; i++){
        if(checkEven(a[i])==1){
            sum_even_value += a[i];
        }
    }
    return sum_even_value;
}

int sumIndex (int a[100], int size){
    int sum_index = 0;
    
    for(int i = 0; i < size; i++){
        if(checkEven(i)==1){
            sum_index += i;
        }
    }
    return sum_index;
}
