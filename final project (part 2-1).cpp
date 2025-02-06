//
//  main.cpp
//  final project (part 2)
//
//  Created by Mai Ngoc Diem My on 6/2/25.
//

#include <iostream>
using namespace std;
struct student {
    string id;
    string name;
};

struct node {
    student data;
    struct node*next;
};

struct list {
    node *pHead;
    node *pTail;
};
void initialize (list &L);
node *createNode (student x);
void addToList(list &L, student x);
void insertList (int &size, list &L);
void traverseList (list L);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
    
    int size;
    insertList(size, L);
        
    traverseList(L);
    
    return 0;
}

void initialize (list &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}// initialize linked list

node *createNode (student x) {
    // Create new node
    node *p;
    p = new node;
    if (p==NULL) {
        cout << "Full list";
        return NULL;
    }
    p->data=x;
    p->next=NULL;
    return p;
}// create node of linked list

void addToList(list &L, student x) {
    node *p = createNode(x);
    if (L.pHead == NULL) { // Neu danh sach rong
        L.pHead = p;
        L.pTail = p;
        p->next = L.pHead; // Tao vong lap linked list
    } else {
        L.pTail->next = p;
        L.pTail = p;
        L.pTail->next = L.pHead; // Dam bao danh sach van o dang vong lap
    }
}// function add node to circle linked list

void insertList (int &size, list &L) {
    cout << "Enter number of students: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        student s;
        cout << "Enter student id: ";
        cin >> s.id;
            
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, s.name);
            
        cout << endl;
            
        node* newNode = createNode(s); // Tao node tu thong tin sinh vien vua nhap
        if (newNode != NULL) {
            if (L.pHead == NULL) { // Neu danh sach rong
                L.pHead = newNode;
                L.pTail = newNode;
                L.pTail->next = L.pHead; // Tao vong lap
            } else { // Chen dau danh sach
                newNode->next = L.pHead;
                L.pHead = newNode;
                L.pTail->next = L.pHead; // Cap nhat pTail->next de giu vong
            }
        }
    }
}

void traverseList (list L) {
    if (L.pHead == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    node *p = L.pHead;
    cout << "Linked list of student: " << endl;
    do {
        cout << "ID: " << p->data.id << endl;
        cout << "Name: " << p->data.name << endl;
        cout << "--------------------------\n";
        p = p->next;
    } while (p != L.pHead); // Dieu kien dung: khi quay lai pHead
}// display information of circle linked list


