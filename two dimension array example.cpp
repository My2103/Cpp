//
//  main.cpp
//  A+
//
//  Created by Mai Ngoc Diem My on 11/06/2024.
//

#include <iostream>
using namespace std;
void input (int a[100][100], int &row, int &column);
void output (int a[100][100], int row, int column);
int main(int argc, const char * argv[]) {
    int a[100][100], row, column;
    
    //Input and output two dimension array
    input(a, row, column);
    output(a, row, column);
    
    return 0;
}//end main

void input (int a[100][100], int &row, int &column){
    cout<<"Enter row = ";
    cin>>row;
    
    cout<<"Enter column = ";
    cin>>column;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<"array["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
}//end input

void output (int a[100][100], int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
