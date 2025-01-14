//
//  main.cpp
//  queue (3)
//
//  Created by Mai Ngoc Diem My on 13/1/25.
//
#define MAX 100
#include <iostream>
using namespace std;
struct Myqueue {
    int front; //first node
    int rear; //last node
    int nodes[MAX]; // array items
};
int main(int argc, const char * argv[]) {
    
    return 0;
}// end main

void initialize (struct Myqueue *pq) {
    pq->front = pq->rear = MAX-1;
}// initialize

int empty (struct Myqueue *pq) {
    return ((pq->front==pq->rear)?1:0);
}// empty

int full (struct Myqueue *pq) {
    return (((pq->rear + 1) % MAX == pq->front)?1:0);
}// full

void insert (struct Myqueue *pq, int x) {
    
}// insert

