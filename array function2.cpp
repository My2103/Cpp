//
//  main.cpp
//  on3
//
//  Created by Mai Ngoc Diem My on 02/06/2024.
//

#include <iostream>
using namespace std;
void getSize (int &size);
void getArray (int myArray[], int &size);
void printArray (int myArray[], int &size);
int countFrequency (int myArray[], int number, int &size);
int checkNegative(int number);
int checkOdd(int number);
void checkMin (int myArray[], int &size, int &min, int &index);
void checkMax (int myArray[], int &size, int &max, int &index);
int main(int argc, const char * argv[]) {
    int size;
    
    //Get the array size
    getSize(size);
    
    //Get the array
    int myArray[size];
    getArray(myArray, size);
    
    //Print the array
    printArray(myArray, size);
    
    //Count Frequency
    int number;
    cout<<"Enter a number to count it frequency: ";
    cin>>number;
    
    int count = countFrequency(myArray, number, size);
    cout<<"The frequency of "<<number<<" is "<<count<<"."<<endl;
    
    //Check negative
    cout<<"The negative number in the array is: "<<endl;
    for(int i = 0; i < size; i++){
        if(checkNegative(myArray[i])==1){
            cout<<"Array ["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
   
    //Check odd
    cout<<"The odd number in the array: "<<endl;
    for(int i = 0; i<size; i++){
        if(checkOdd(myArray[i])==1){
            cout<<"Array ["<<i<<"]"<<" = "<<myArray[i]<<endl;
        }
    }
    
    //Check min
    int index, min;
    checkMin(myArray, size, min, index);
    cout<<"Minimun element is at index "<<index<<" and its value is "<<min<<endl;
    
    //Check max
    int max;
    checkMax(myArray, size, max, index);
    cout<<"Maximum element is at index "<<index<<" and its value is "<<max<<endl;
    
    return 0;
}

void getSize (int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
}//end get size

void getArray (int myArray[], int &size){
    cout<<"Enter "<<size<<" integer: ";
    for (int i = 0; i<size; i++){
        cin>>myArray[i];
    }
}//end get array

void printArray (int myArray[], int &size){
    cout<<"Array elements are: "<<endl;
    for (int i = 0; i < size; i++){
        cout<<"Array ["<<i<<"]"<<" = "<<myArray[i]<<endl;
    }
}//end print array

int countFrequency (int myArray[], int number, int &size){
    int count = 0;
    
    for(int i = 0; i<size; i++){
        if(myArray[i]==number){
            count++;
        }
    }
    return count;
}//end count frequency

int checkNegative(int number){
    if(number < 0){
        return 1;
    } else {
        return 0;
    }
}//end check nagative

int checkOdd(int number){
    if(number%2==0){
        return 0;
    } else{
        return 1;
    }
}//end check odd

void checkMin (int myArray[], int &size, int &min, int &index){
    min = myArray[0];
    index = 0;
    
    for(int i = 1; i<size; i++){
        if(myArray[i]<min){
            min = myArray[i];
            index = i;
        }
    }
}//end check min

void checkMax (int myArray[], int &size, int &max, int &index){
    max = myArray[0];
    index = 0;
    
    for(int i = 1; i<size; i++){
        if(myArray[i]>max){
            max = myArray[i];
            index = i;
        }
    }
}//end check max
