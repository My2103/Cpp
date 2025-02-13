//
//  main.cpp
//  practice circular linked list
//
//  Created by Mai Ngoc Diem My on 13/2/25.
//

#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};

struct list {
    node *pHead;
    node *pTail;
};
void initialize (list &L);
node* createNode (int x);
void insertList (int &size, list &L);
void displayList (list &L);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L);
    
    int size;
    insertList(size, L);
    displayList(L);
    
    return 0;
}// end main

void initialize (list &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}// initialize linked list

node* createNode (int x) {
    // Create a new node
    node *p;
    p = new node;
    if (p==NULL) {
        cout << "Full list!" << endl;
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}// function create node

void insertList (int &size, list &L) {
    cout << "Enter the number node of linked list: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        int x;
        cout << "Enter the value for node " << i + 1 << ": ";
        cin >> x;
        
        node* newNode = createNode(x);
        if (newNode != nullptr) {
            if (L.pHead == NULL) {
                // Nếu danh sách đang rỗng, cả pHead và pTail đều trỏ đến newNode
                L.pHead = L.pTail = newNode;
                L.pTail->next = L.pHead;
            } else {
                L.pTail->next = newNode;
                L.pTail = newNode;
                L.pTail->next = L.pHead;
            }
        }
    }
}// insert node into linked list

void displayList (list &L) {
    if (L.pHead == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }
    
    cout << "Circular linked list: ";
    node* current = L.pHead;
    
    do {
        cout << current->data;
        current = current->next;
        if (current != L.pHead) cout << " -> ";
    } while (current != L.pHead);
    
    cout << endl;
}// Display circular linked list


