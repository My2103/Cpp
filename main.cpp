//
//  main.cpp
//  string
//
//  Created by Mai Ngoc Diem My on 13/1/25.
//
#define MAX 100
#include <iostream>
using namespace std;
struct Mystack {
    int top;
    int nodes[MAX];
};
int main(int argc, const char * argv[]) {
    Mystack ps;
    int x;
    
    
    return 0;
}// end main

int isEmpty (struct Mystack *ps) {
    return ps->top==-1;
}// isEmpty

int isFull(struct Mystack *ps) {
    return ps->top == MAX - 1;
}// isFull

void insert (struct Mystack *ps, int x) {
    if(isFull(ps)){
        cout << "Full stack" << endl;
    } else {
        ps->nodes[++ps->top] = x;
    }
}// insert

void remove (struct Mystack *ps, int x) {
    if (isEmpty(ps)){
        cout <<"\nEmpty queue";
    } else {
        ps->nodes[--ps->top] = x;
    }
}


