//
//  main.cpp
//  stack practice
//
//  Created by Mai Ngoc Diem My on 16/1/25.
//
#define MAX 100
#include <iostream>
#include <stack>
using namespace std;
struct Mystack {
    int top = -1; // Initialize top to -1
    int nodes[MAX];
};
int isEmpty (struct Mystack *ps);
int isFull (struct Mystack *ps);
void insertStack (struct Mystack *ps, int &x);
void displayStack (struct Mystack *ps);
void findMiddle (struct Mystack *ps);
int main(int argc, const char * argv[]) {
    Mystack ps;
    //int choice, value;

    /*while (true) {
        cout << "Menu:\n";
        cout << "1. Push to stack\n";
        cout << "2. Display stack\n";
        cout << "3. Find middle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                insertStack(&ps, value);
                break;
            case 2:
                displayStack(&ps);
                break;
            case 3:
                findMiddle (&ps);
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }*/
    
    int value1 = 7;
    int value2 = 4;
    int value3 = 2;
    int value4 = 5;
    int value5 = -1;
    int value6 = -2;
    int value7 = -3;
    
    insertStack(&ps, value1);
    insertStack(&ps, value2);
    insertStack(&ps, value3);
    insertStack(&ps, value4);
    insertStack(&ps, value5);
    insertStack(&ps, value6);
    insertStack(&ps, value7);
    
    displayStack(&ps);
    
    findMiddle (&ps);
    return 0;
}// main

int isEmpty (struct Mystack *ps) {
    return ((ps->top == -1)?1 : 0);
}// empty

int isFull (struct Mystack *ps) {
    return ((ps->top == MAX - 1)?1 : 0);
}// full

void insertStack (struct Mystack *ps, int &x) {
    if(isFull(ps)) {
        cout << "Stack is full." << endl;
    } else {
        ps->nodes[++ps->top] = x;
    }
}// insert stack

void displayStack (struct Mystack *ps) {
    if (isEmpty(ps)) {
        cout << "Stack is empty." << endl;
    } else {
        for (int i = 0; i <= ps->top; i++){
            cout << ps->nodes[i] << " ";
        }
        cout << endl;
    }
}// display stack

void findMiddle (struct Mystack *ps) {
    if (isEmpty(ps)) { // Check if stack is empty
        cout << "Stack is empty. No middle element." << endl;
        return;
    }

    int middle = ps->top / 2; // Calculate the middle index
    cout << "The middle element: " << ps->nodes[middle] << endl;
}// find middle


