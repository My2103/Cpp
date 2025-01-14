//
//  main.cpp
//  A
//
//  Created by Mai Ngoc Diem My on 11/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
void printDeleteItem(int array[100], int &size, int &position);
void getNewItem (int array[100], int &size, int &position, int &item);
int main(int argc, const char * argv[]) {
    int array[100], size, position, item;
    
    //Get the array from user and output
    getArray (array, size);
    printArray(array, size);
    
    //Delete an item in the array
    printDeleteItem(array, size, position);
    
    //Insert new item
    getNewItem(array, size, position, item);
    
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

void printDeleteItem(int array[100], int &size, int &position){
    cout<<"Enter the position at which to delete the item: ";
    cin>>position;
    
    for(int i = position; i < size - 1; i++){
        array[i] = array[i + 1];
    }
    size--;
    
    cout<<"The array after delete the position "<<position<<" is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end print delete item

void getNewItem (int array[100], int &size, int &position, int &item){
    cout<<"Enter the position you want to insert the item: ";
    cin>>position;
    
    cout<<"Enter the item you want to insert: ";
    cin>>item;
    
    for(int i = size; i > position; i--){
        array[i] = array[i - 1];
    }
    array[position] = item;
    
    size++;
    
    cout<<"The array after insert item is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end get new item


