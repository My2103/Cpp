//
//  main.cpp
//  queue homework
//
//  Created by Mai Ngoc Diem My on 14/1/25.
//
#define MAX 100
#include <iostream>
#include <queue>
using namespace std;
struct object {
    int id;
    string name;
}; object o;
struct Myqueue {
    int front;
    int rear;
    object nodes[MAX];
};
void initialize (struct Myqueue *pq);
int empty (struct Myqueue *pq);
int full (struct Myqueue *pq);
void insert (struct Myqueue *pq, struct object o);
void displayQueue (struct Myqueue *pq);
int computeModulus (int x, int y);
void remove (struct Myqueue *pq);
void itemExport (struct Myqueue *pq);
void itemNew (struct Myqueue *pq);
void displayAllItem (struct Myqueue *pq, struct object o);
void removeAllItem (struct Myqueue *pq, struct object o);
int main(int argc, const char * argv[]) {
    Myqueue pq;
    initialize(&pq); // Khởi tạo hàng đợi

    // Tạo các object để chèn vào hàng đợi
    object o1 = {1, "Anna"};
    object o2 = {2, "John"};
    object o3 = {3, "Mike"};
    object o4 = {4, "Sarah"};
    object o5 = {5, "Elsa"};
    
    // Chèn các object vào hàng đợi
    insert(&pq, o1);
    insert(&pq, o2);
    insert(&pq, o3);
    insert(&pq, o4);
    insert(&pq, o5);
    
    // Hiển thị các phần tử trong hàng đợi
    displayQueue(&pq);
    
    // Delete element in queue
    remove(&pq);
    
    // Display after delete
    cout << "\nAfter delete: " << endl;
    displayQueue(&pq);
    
    // Display item ready for export
    itemExport(&pq);
    
    // Display item newly in the queue
    itemNew(&pq);
    
    //Display all item
    cout << "\nAll item in the queue: ";
    displayAllItem(&pq, o);
    
    //Remove all item
    cout<<"\nRemove all item: ";
    removeAllItem(&pq, o);
    cout << endl;
    
    return 0;
}// main

void initialize(struct Myqueue *pq) {
    pq->front = -1; // Hàng đợi trống
    pq->rear = -1;  // Hàng đợi trống
}// initialize

// Kiểm tra hàng đợi rỗng
int empty(struct Myqueue *pq) {
    return (pq->front == -1);
}// empty

int full (struct Myqueue *pq) {
    return (((pq->rear + 1) % MAX == pq->front) ? 1 : 0);
}// full

void insert (struct Myqueue *pq, struct object o) {
    if (full(pq)) {
        cout << "Queue is full.";
    } else {
        if (empty(pq)) {
            // Nếu hàng đợi trống, cập nhật front và rear
            pq->front = pq->rear = 0;
        } else {
            // Di chuyển rear theo kiểu vòng tròn
            pq->rear = (pq->rear + 1) % MAX;
        }
        // Chèn phần tử vào hàng đợi
        pq->nodes[pq->rear] = o;
    }
}// insert new item

void remove (struct Myqueue *pq) {
    if(empty(pq)) {
        cout << "The queue is empty." << endl;
    } else {
        //Nếu chỉ có một phần tử trong queue
        if (pq->front == pq->rear) {
            // reset front và rear về -1 (queue rỗng)
            pq->front = pq->rear = -1;
        } else {
            // Move front to next element (circular queue)
            pq->front = (pq->front + 1) % MAX;
        }
    }
}// remove item

void displayQueue (struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty." << endl;
    } else {
        int i = pq->front;
        cout << "Elements in queue: " << endl;
        while (true) {
            cout << pq->nodes[i].id << "-" << pq->nodes[i].name << " ";
            
            if (i == pq->rear) {
                break; // Dừng khi đã hiển thị phần tử cuối
            }
            i = (i + 1) % MAX; // Di chuyển đến vị trí tiếp theo (vòng tròn)
        }
        cout << endl;
    }
}// display Queue

void itemExport (struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "\nThe item ready for export: " << pq->nodes[pq->front].id << "-" << pq->nodes[pq->front].name << endl;
    }
}// item export

void itemNew (struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "\nThe item newly for import: " << pq->nodes[pq->rear].id << "-" << pq->nodes[pq->rear].name << endl;
    }
}// item export

void displayAllItem (struct Myqueue *pq, struct object o) {
    if(empty(pq)) {
        cout << "The queue is empty." << endl;
    } else {
        int i = pq->front;
        while (true) {
            cout << pq->nodes[i].id << "-" << pq->nodes[i].name << " ";
            
            if (i == pq->rear) {
                break;
            }
            i++;
        }
        cout << endl;
    }
}// display all item

void removeAllItem (struct Myqueue *pq, struct object o) {
    if(empty(pq)) {
        cout << "The queue is empty." << endl;
    } else {
        pq->front = pq->rear = -1; // Empty the queue
    }
}// remove all item
/*int computeModulus (int x, int y) {
    return x % y;
}*/




