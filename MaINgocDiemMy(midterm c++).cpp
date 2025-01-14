//
//  main.cpp
//  midterm test1
//
//  Created by Mai Ngoc Diem My on 13/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100], int &size);
void printArray (int array[100], int size);
int checkPositiveNumber (int number);
void sumPositive (int array[100], int size);
int checkPerfect (int number);
void sumPerfect (int array[100], int size);
void findPerfect (int array[100], int size);
void findAllPerfectNumber (int array[100], int size);
int checkAlternate (int array[100], int size);
int checkAscending (int array[100], int size);
void swap (int &x, int &y);
void softArray (int array[100], int size);
void printSoftArray(int array[100], int size);
int main(int argc, const char * argv[]) {
    int array[100], size;
    
    //Get the array from user and output (question 1)
    getArray (array, size);
    printArray(array, size);
    
    //Sum all positive number (question 2)
    sumPositive(array, size);
    
    //Sum all perfect number (question 3)
    sumPerfect(array, size);
    
    //Find perfect number (question 4)
    findPerfect(array, size);
    
    //Find all perfect (question 5)
    findAllPerfectNumber(array, size);
    
    //Check alternate (question 6)
    if(checkAlternate(array, size)==1){
        cout<<"This array is alternate."<<endl;
    } else {
        cout<<"This array is not alternate."<<endl;
    }
    
    //Check ascending (question 7)
    if(checkAscending(array, size)==1){
        cout<<"This array is ascending."<<endl;
    } else {
        cout<<"This array is not ascending."<<endl;
    }
    
    //Soft array (question 8)
    softArray(array, size);
    printSoftArray(array, size);
    
    
    
    return 0;
}//end main

void getArray (int array[100], int &size){
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    for(int i = 0; i < size; i++){
        cout<<"a["<<i<<"]"<<" = ";
        cin>>array[i];
    }
}//end getArray (question 1)

void printArray (int array[100], int size){
    cout<<"Your array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//end printArray (question 1)

int checkPositiveNumber (int number){
    if(number > 0){
        return 1;
    }
    return 0;
}//end check positive

void sumPositive (int array[100], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(checkPositiveNumber(array[i])==1){
            sum += array[i];
        }
    }
    cout<<"The sum of all positive number in array = "<<sum<<endl;
}//end sum positive (question 2)

int checkPerfect (int number){
    int sum = 0;
    
    for (int i = 1; i < number; i++){
        if(number%i == 0){
            sum += i;
        }
    }
    if(sum==number){
        return 1;
    } else {
        return 0;
    }
}//end check Perfect

void sumPerfect (int array[100], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(checkPerfect(array[i])==1){
            sum += array[i];
        }
    }
    cout<<"The sum of all perfect number in array = "<<sum<<endl;
}//end sum perfect (question 3)

void findPerfect (int array[100], int size){
    int perfect = false;
    for(int i = 0; i < size; i++){
        if(checkPerfect(array[i])==1){
            perfect = true;
        }
    }
    if(perfect==true){
        cout<<"The array has at least 1 perfect number."<<endl;
    } else {
        cout<<"The array does not have perfect number."<<endl;
    }
}//end the find perfect (question 4)

void findAllPerfectNumber (int array[100], int size){
    int perfect = true;
    for(int i = 0; i < size; i++){
        if(checkPerfect(array[i])==0){
            perfect = false;
        }
    }
    if(perfect==true){
        cout<<"The array has all perfect number."<<endl;
    } else {
        cout<<"The array does not have all perfect number."<<endl;
    }
}//end the find all perfect (question 5)

int checkAlternate (int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        if((array[i] < 0 && array[i + 1] < 0) || (array[i] >= 0 && array[i + 1] >= 0)){
            return 0;
        }
    }
    return 1;
}//end check alternate (question 6)

int checkAscending (int array[100], int size){
    for(int i = 0; i < size - 1; i++){
        if(array[i] > array[i+1]){
            return 0;
        }
    }
    return 1;
}//end check ascending (question 7)

void swap (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}//end swap

void softArray (int array[100], int size){
    for(int i = 0; i < size -1; i++){
        for (int j = i + 1; j < size; j++){
            if(array[i] % 2 == 0 && array[j] % 2 == 0 && array[i] > array[j]){
                swap(array[j], array[i]);
            } else if (array[i] % 2 != 0 && array[j] % 2 != 0 && array[i] < array[j]){
                swap(array[j], array[i]);
            }
        }
    }
}//end soft array (question 8)

void printSoftArray(int array[100], int size) {
    cout<<"Your descending array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}//print soft array (question 8)
