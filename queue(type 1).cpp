//
//  main.cpp
//  queue
//
//  Created by Mai Ngoc Diem My on 13/1/25.
//
#define MAX 100
#include <iostream>
#include <queue>
using namespace std;
struct Myqueue {
    int front; //first node
    int rear; // last node
    int nodes[MAX]; //array items
};
void initialize(struct Myqueue *pq);
int empty(struct Myqueue *pq);
int full (struct Myqueue *pq);
void insert (struct Myqueue *pq, int x);
void remove (struct Myqueue *pq);
void traverse (struct Myqueue *pq);
int main(int argc, const char * argv[]) {
    
    return 0;
}// end main

void initialize(struct Myqueue *pq) {
    pq->front = 0;
    pq->rear = -1;
}// initialize

int empty(struct Myqueue *pq) {
    return ((pq->front>pq->rear)?1:0);
}// empty

int full (struct Myqueue *pq) {
    return ((pq->rear==MAX-1)?1:0);
}// full

void insert (struct Myqueue *pq, int x) {
    if (full(pq))
        cout <<"\nFull name";
    else
        pq->nodes[++pq->rear] = x;
}// insert

void remove (struct Myqueue *pq) {
    if(empty(pq))
        cout <<"\nEmpty queue";
    else
        pq->front++;
}// remove

void traverse (struct Myqueue *pq) {
    if(empty(pq)) {
        cout <<"\nEmpty queue";
    }
    else {
        int i=pq->front;
        cout <<"QUEUE";
        while (i!=pq->rear){
            cout << pq->nodes[i] << " ";
            i++;
        }
        cout << pq->nodes[pq->rear] << endl;
    }
}// Print QUEUE


