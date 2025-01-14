//
//  main.cpp
//  queue (1)
//
//  Created by Mai Ngoc Diem My on 9/1/25.
//
#define MAX 100
#include <iostream>
using namespace std;
struct item {
    int id;
    char name[12];
};
struct Myqueue {
    int front; //first node
    int rear; //last node
    item nodes[MAX];//array items
};
void initialize(struct Myqueue *pq);
int empty (struct Myqueue *pq);
item remove(struct Myqueue *pq);
int main(int argc, const char * argv[]) {
    Myqueue pq;
    initialize(&pq);
    
    
    return 0;
}

void initialize(struct Myqueue *pq) {
    pq->front = pq->rear = MAX - 1;
}

int empty (struct Myqueue *pq) {
    return ((pq -> front==pq->rear)? 1 : 0);
}

void insert(struct Myqueue *pq, item x) {
    if (pq->rear == MAX -1){
        pq->rear = 0;
    } else {
        
    }
}// insert item

item remove(struct Myqueue *pq) {
    if(empty(pq)){
        cout << "\nNot item in store.";
    } else {
        if(pq->front == MAX-1)
            pq->front=0;
        else
            (pq->front)++;
    }
    return (pq->nodes[pq->front]);//check
}// remove item
