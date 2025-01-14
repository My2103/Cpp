//
//  main.cpp
//  on tap2
//
//  Created by Mai Ngoc Diem My on 08/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
void insertNewValue (int array[100], int size, int position, int value);
void getNewValue (int array[100], int &size, int &position, int &value);
void printNewValue (int array[100], int size, int position, int value);
void deleteValue (int array[100], int &size, int position);
void printDeleteValue (int array[100], int size, int &position);
int main(int argc, const char * argv[]) {
    int array[100], size, position, value;
    
    //Get the array from user and output
    getArray (array, size);
    printArray(array, size);
    
    //Insert new value
    getNewValue(array, size, position, value);
    printNewValue(array, size, position, value);
    
    //Delete value
    printDeleteValue(array, size, position);
    
    return 0;
}//end main

void getArray (int array[100], int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"a["<<i<<"]"<<" = ";
        cin>>array[i];
    }
}//end getArray

void printArray (int array[100], int size){
    cout<<"Your array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end printArray

void insertNewValue (int array[100], int size, int position, int value){
    for(int i = size; i > position; i--){
        array[i] = array[i - 1];
    }
    array[position] = value;
}

void getNewValue (int array[100], int &size, int &position, int &value){
    cout<<"Enter the position at which to insert the new value: ";
    cin>>position;
    
    cout<<"Enter the new value: ";
    cin>>value;
    
    insertNewValue(array, size, position, value);
    
    size++;
}

void printNewValue (int array[100], int size, int position, int value){
    cout<<"Array after insertion: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void deleteValue (int array[100], int &size, int position){
    for(int i = position; i < size - 1; i++){
        array[i] = array[i + 1];
    }
    
    size--;
}

void printDeleteValue (int array[100], int size, int &position){
    cout<<"Enter the position at which to delete the value: ";
    cin>>position;
    
    deleteValue(array, size, position);
    
    cout<<"Array after delete: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
