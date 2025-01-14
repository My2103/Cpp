//
//  main.cpp
//  A++
//
//  Created by Mai Ngoc Diem My on 11/06/2024.
//

#include <iostream>
using namespace std;
void getArray (int array[100][100], int &row, int &column);
void printArray (int array[100][100], int row, int column);
void sumArray (int array[100][100], int row, int column);
void findEvenRow (int array[100][100], int row, int column);
int main(int argc, const char * argv[]) {
    int array[100][100], row, column;
    
    //Get and print dimension array
    getArray(array, row, column);
    printArray(array, row, column);
    
    //Sum all items
    sumArray(array, row, column);
    
    //Check even row
    findEvenRow(array, row, column);
    return 0;
}//end main

void getArray (int array[100][100], int &row, int &column){
    cout<<"Enter the row of the array: ";
    cin>>row;
    
    cout<<"Enter the column of the array: ";
    cin>>column;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<"array["<<i<<"]["<<j<<"] = ";
            cin>>array[i][j];
        }
    }
}//end get Array

void printArray (int array[100][100], int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}//end print array

void sumArray (int array[100][100], int row, int column){
    int sum = 0;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum += array[i][j];
        }
    }
    cout<<"The sum = "<<sum<<endl;
}//end sum array

int checkEven (int number){
    if(number%2==0){
        return 1;
    } else {
        return 0;
    }
}//end check even

/*void findEvenRow (int array[100][100], int row, int column){
    for(int i = 0; i < row; i++){
        int even = true;
        for(int j = 0; j < column; j++){
            if(checkEven(array[i][j])==0){
                even = false;
                break;
            }
        }
        if(even == true){
            cout<<"Row "<<i<<" in the array is all even."<<endl;
        } else {
            cout<<"Row "<<i<<" in the array is not all even."<<endl;
        }
        
    }
}//end check even row

int checkEvenRow(int array[100][100], int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(checkEven(array[i][j])==0){
                return 0;
                break;
            }
            continue;
        }
    }
    return 1;
}

void findEvenRow (int array[100][100], int row, int column){
    if(checkEvenRow(array, row, column)==1){
        cout<<"Array has at least 1 row all even."<<endl;
    } else {
        cout<<"Array does not have row all even."<<endl;
    }
}*/

int checkRow (int array[100][100], int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(checkEven(array[i][j])==0){
                return 0;
            }
        }
    }
    return 1;
}

void findEvenRow (int array[100][100], int row, int column){
    for (int i = 0; i < row; i++){
        if(checkRow(array, row, column)==1){
            cout<<"The array have at leats one row all even."<<endl;
        } else {
            cout<<"The array has no row all even."<<endl;
        }
    }
}


