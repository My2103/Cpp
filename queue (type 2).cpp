//
//  main.cpp
//  queue (2)
//
//  Created by Mai Ngoc Diem My on 13/1/25.
//
#define MAX 100
#include <iostream>
#include <queue>
using namespace std;
struct Myqueue {
    int rear; //last node
    int nodes[MAX]; // array items
};
void initialize (struct Myqueue *pq);
int empty (struct Myqueue *pq);
int full (struct Myqueue *pq);
void insert (struct Myqueue *pq, int x);
void remove (struct Myqueue *pq);
void displayQueue(struct Myqueue *pq);
int main(int argc, const char * argv[]) {
    // Create a Myqueue instance
    Myqueue pq;
    
    // Initialize the queue
    initialize(&pq);

    // Insert elements into the queue
    insert(&pq, 10);
    insert(&pq, 20);
    insert(&pq, 30);
    
    //Display new queue
    displayQueue(&pq);
    
    //Remove element in queue
    remove(&pq);
    
    //Display new queue
    displayQueue(&pq);
    
    //Insert new elements
    insert(&pq, 40);
    
    //Display new queue
    displayQueue(&pq);
    return 0;
}// end main

void initialize (struct Myqueue *pq) {
    pq->rear = -1;
}// initialize

int empty (struct Myqueue *pq) {
    return ((pq->rear==-1)?1:0);
}// empty

int full (struct Myqueue *pq) {
    return ((pq->rear==MAX-1)?1:0);
}// full

void insert (struct Myqueue *pq, int x) {
    if (full(pq))
        cout <<"\nFull queue";
    else
        pq->nodes[++pq->rear] = x;
}// insert

void remove (struct Myqueue *pq) {
    if(empty(pq)) {
        cout <<"\nEmpty queue";
    }
    else {
        for (int i = 0; i < pq->rear; i++) {
            pq->nodes[i] = pq->nodes[i + 1];
        }
        pq->rear--;
    }
}// remove

void displayQueue (struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty." << endl;
    } else {
        for (int i = 0; i <= pq->rear; i++) {
            cout << pq->nodes[i] << " ";
        }
        cout << endl;
    }
}// display queue
