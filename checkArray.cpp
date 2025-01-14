//
//  main.cpp
//  on tap1
//
//  Created by Mai Ngoc Diem My on 08/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
int checkAlternate (int array[100], int size);
int checkEven (int number);
void printEven (int array[100], int size);
void printEvenPosition (int array[100], int size);
int checkOdd (int number);
void printOdd (int array[100], int size);
void printOddPosition (int array[100], int size);
void findNegative (int array[100], int size);
void checkAllPositive (int array[100], int size);
void findMin (int array[100], int size);
void findMax (int array[100], int size);
int main(int argc, const char * argv[]) {
    int array[100], size;
    
    //Get and print array
    getArray(array, size);
    printArray(array, size);
    
    //Check alternate
    if(checkAlternate(array, size)==1){
        cout<<"This array is alternate."<<endl;
    } else {
        cout<<"This array is not alternate."<<endl;
    }
    
    //Print even elements
    printEven(array, size);
    
    //Print elements of the even position
    printEvenPosition(array, size);
    
    //Print odd elements
    printOdd(array, size);
    
    //Print elements of the odd position
    printOddPosition(array, size);
    
    //Print negative elements
    findNegative(array, size);
    
    //Check all positive
    checkAllPositive(array, size);
    
    //Check min
    findMin(array, size);
    
    //Check max
    findMax(array, size);
    
    //Insert a new value in the array (take value and position from the user)
    
    //Delete an element
    
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

int checkAlternate (int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        if((array[i] < 0 && array[i + 1] < 0) || (array[i] >= 0 && array[i + 1] >= 0)){
            return 0;
        }
    }
    return 1;
}//end check alternate

int checkEven (int number){
    if(number%2==0){
        return 1;
    }
    return 0;
}//end check even

void printEven (int array[100], int size){
    cout<<"The even elements in the array: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkEven(array[i])==1){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}//end print even elements

void printEvenPosition (int array[100], int size){
    cout<<"The elements from the even position: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkEven(i)==1){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}//end print even position

int checkOdd (int number){
    if(number%2!=0){
        return 1;
    }
    return 0;
}//end check odd

void printOdd (int array[100], int size){
    cout<<"The odd elements in the array: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkOdd(array[i])==1){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}//end print odd elements

void printOddPosition (int array[100], int size){
    cout<<"The elements from the odd position is: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkOdd(i)==1){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}//end print odd position

int checkNegative(int number){
    if(number < 0){
        return 1;
    } else {
        return 0;
    }
}//end check negative

void findNegative (int array[100], int size){
    cout<<"The negative elements in the array: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkNegative(array[i])==1){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
}//end find negative

void checkAllPositive (int array[100], int size){
    int positive = true;
    for(int i = 0; i < size; i++){
        if(checkNegative(array[i])==1){
            positive = false;
        }
    }
    if(positive==true){
        cout<<"The array is all positive."<<endl;
    } else {
        cout<<"The array have at least all negative elements."<<endl;
    }
}//end check all positive

void findMin (int array[100], int size){
    int min = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    cout<<"Min = "<<min<<endl;
}//end find min

void findMax (int array[100], int size){
    int max = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    cout<<"Max = "<<max<<endl;
}//end find max
