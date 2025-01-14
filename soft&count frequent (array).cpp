//
//  main.cpp
//  on tap
//
//  Created by Mai Ngoc Diem My on 08/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
void swap (int &x, int &y);
void softArrayAscending (int array[100], int size);
void printArrayAscending (int array[100], int size);
void softArrayDescending (int array[100], int size);
void printArrayDescending (int array[100], int size);
int countFrequent (int array[100], int number, int size);
int main(int argc, const char * argv[]) {
    int array[100], size;
    
    //Get and print the array
    getArray(array, size);
    printArray(array, size);
    
    //Soft the array ascending
    softArrayAscending(array, size);
    printArrayAscending(array, size);
    
    //Soft the array descending
    softArrayDescending(array, size);
    printArrayDescending(array, size);
    
    //Count frequent
    int number;
    
    cout<<"Enter a number to count frequent: ";
    cin>>number;
    
    int count = countFrequent(array, number, size);
    cout<<"The frequent of "<<number<<" is "<<count<<endl;
    //Check alternate
    
    
    
    return 0;
}//end main
void getArray (int array[100], int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"array["<<i<<"]"<<" = ";
        cin>>array[i];
    }
}//end get array

void printArray (int array[100], int size){
    cout<<"Your array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end print array

void swap (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}//end swap

void softArrayAscending (int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[i]){
                swap(array[j], array[i]);
            }
        }
    }
}//end soft ascending

void printArrayAscending (int array[100], int size){
    cout<<"Your ascending array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end print ascending


void softArrayDescending (int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[j] > array[i]){
                swap(array[j], array[i]);
            }
        }
    }
}//end soft descending

void printArrayDescending (int array[100], int size){
    cout<<"Your array descending is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end print descending

int countFrequent (int array[100], int number, int size){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(number == array[i]){
            count++;
        }
    }
    return count;
}//end count frequent



