//
//  main.cpp
//  practice double linked list
//
//  Created by Mai Ngoc Diem My on 10/2/25.
//

#include <iostream>
using namespace std;
struct node {
    int data;
    node *prev;
    node *next;
};
struct list {
    node *pHead;
    node *pTail;
};
void initialize (list &L);
node *createNode (int x);
void insertList (int &size, list &L);
void displayList (list &L);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
           
    int size;
    insertList(size, L);
    displayList(L);
    
    
    return 0;
}// end main

void initialize (list &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}// initialize linked list

node *createNode (int x) {
    // Create new node
    node *p;
    p = new node;
    if (p==NULL) {
        cout << "Full list";
        return NULL;
    }
    p->data=x;
    p->prev = NULL;
    p->next=NULL;
    return p;
}// create node of linked list

void insertList (int &size, list &L) {
    cout << "Enter the number of nodes in the list: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        int x;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> x;

        node* newNode = createNode(x);
        if (newNode == NULL) {
            cout << "Memory allocation failed. Stopping insertion.\n";
            return; // Dừng hàm nếu không cấp phát được bộ nhớ
        }
        
        if (newNode != NULL) {
            if (L.pHead == NULL) {
                // Nếu danh sách đang rỗng, cả pHead và pTail đều trỏ đến newNode
                L.pHead = L.pTail = newNode;
            } else {
                // Chèn vào cuối danh sách
                L.pTail->next = newNode;
                newNode->prev = L.pTail;
                L.pTail = newNode;
            }
        }
    }
}// function insert node to double linked list

void displayList (list &L) {
    if (L.pHead == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }
    
    cout << "Linked list (forward): ";
    node* current = L.pHead;
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) cout << " -> ";
        current = current->next;
    }
    cout << endl;
    
    // In ngược lại từ pTail để kiểm tra danh sách liên kết đôi
    cout << "Linked list (backward): ";
    current = L.pTail;
    while (current != NULL) {
        cout << current->data;
        if (current->prev != NULL) cout << " <- ";
        current = current->prev;
    }
    cout << endl;
}// function display double linked list

