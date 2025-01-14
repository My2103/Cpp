//
//  main.cpp
//  final3
//
//  Created by Mai Ngoc Diem My on 19/06/2024.
//

#include <iostream>
using namespace std;
struct Book {
    string title;
    string author;
    int year;
};
void input (Book a[100], int &size);
void output (Book a[100], int size);
int main(int argc, const char * argv[]) {
    Book a[100];
    int size;
    
    //Input the information of book
    input(a, size);
    
    //Output the information of all book
    cout<<"\nThe information of all book is: "<<endl;
    output(a, size);
    
    return 0;
}//end main

void input (Book a[100], int &size){
    cout<<"Enter the number of books: ";
    cin>>size;
    
    
    for(int i = 0; i < size; i++){
        cin.ignore(32767, '\n');
        cout<<"\nBook "<<i<<endl;
        cout<<"Tilte: ";
        getline(cin, a[i].title);
        cout<<"Author: ";
        getline(cin, a[i].author);
        cout<<"Publish year: ";
        cin>>a[i].year;
    }
}//end input

void output (Book a[100], int size){
    for(int i = 0; i < size; i++){
        cout<<"\nTitle: "<<a[i].title<<endl;
        cout<<"Author: "<<a[i].author<<endl;
        cout<<"Publish year: "<<a[i].year<<endl;
    }
}//end output
