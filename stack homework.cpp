//
//  main.cpp
//  stack homework
//
//  Created by Mai Ngoc Diem My on 14/1/25.
//
#define MAX 100
#include <iostream>
#include <stack>
using namespace std;
struct Mystack {
    int top;
    char nodes[MAX];
};
int isEmpty (struct Mystack *ps);
int isFull (struct Mystack *ps);
void inputString (string &s);
void insertStack (struct Mystack *ps, string s);
void displayStack (struct Mystack *ps);
char pop (struct Mystack *ps);
void takeOutStack (struct Mystack *ps);
int main(int argc, const char * argv[]) {
    Mystack ps;
    string s;
    
    insertStack(&ps, s);
    
    cout << "Output string: ";
    displayStack(&ps);
    
    cout << "Reverse string: ";
    takeOutStack(&ps);
    return 0;
}// main

int isEmpty (struct Mystack *ps) {
    return ((ps->top == -1)?1 : 0);
}// empty

int isFull (struct Mystack *ps) {
    return ((ps->top == MAX - 1)?1 : 0);
}// full

void inputString (string &s) {
    cout << "Enter your string: ";
    getline(cin, s);
}// input string

void insertStack (struct Mystack *ps, string s) {
    inputString(s);
    
    if (isFull(ps)) {
        cout << "The stack is full. " << endl;
    } else {
        for (int i = 0; i < s.length(); i++) {
            ps->nodes[++ps->top] = s[i];
        }
    }
    
}// insert stack

void displayStack (struct Mystack *ps) {
    if (isEmpty(ps)) {
        cout << "Stack is empty." << endl;
    } else {
        for (int i = 0; i <= ps->top; i++) {
            cout << ps->nodes[i];
        }
        cout << endl;
    }
}// display queue

// Pop element out of stack
/*char pop (struct Mystack *ps) {
    if (isEmpty(ps)) {
        cout << "Stack is empty, cannot pop." << endl;
        return 0;
    } else {
        return ps->nodes[ps->top--];
    }
}// pop*/

void takeOutStack (struct Mystack *ps) {
    if (isEmpty(ps)) {
        cout << "Stack is empty." << endl;
    } else {
        string removed;
        while (true) {
            removed = ps->nodes[ps->top--];
            if (isEmpty(ps)) {
                break;
            }
            cout << removed;
        }
        cout << endl;
    }
}// take out stack





