//
//  main.cpp
//  final project (part 2-2)
//
//  Created by Mai Ngoc Diem My on 7/2/25.
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
void insertAStudent (list &L);
void deleteAStudent (int &pos, list &L);
void insertAStudentInPos (int &pos, list &L);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
    
    int size;
    insertList(size, L);
    traverseList(L);
    
    /*int choice;
    cout << "If you want to insert new student enter 1 (else enter 0): ";
    cin >> choice;
    
    if (choice == 1) {
        insertAStudent(L);
        traverseList(L);
    }
    
    cout << "If you want to delete a student enter 2 (else enter 0): ";
    cin >> choice;
    
    if (choice == 2) {
        int pos;
        cout << "Enter the position you want to delete: ";
        cin >> pos;
        deleteAStudent(pos, L);
        traverseList(L);
    }*/
    
    int choice;
    cout << "If you want to insert new student enter 1 (else enter 0): ";
    cin >> choice;
    
    if (choice == 1) {
        int pos;
        cout << "Enter the position you want to insert: ";
        cin >> pos;
        insertAStudentInPos(pos, L);
        traverseList(L);
    }
    
    
    return 0;
}// end main

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

void insertAStudent (list &L) {
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
}// function insert a student to the head of the linked list

void deleteAStudent(int &pos, list &L) {
    if (L.pHead == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    node *current = L.pHead, *prev = NULL;
    int count = 0; // Đếm vị trí hiện tại
    
    // Nếu xoá node đầu tiên
    if (pos == 0) {
        if (L.pHead == L.pTail) { // Nếu chỉ có 1 node
            delete L.pHead;
            L.pHead = L.pTail = NULL;
        } else {
            L.pHead = L.pHead->next;
            delete current;
            L.pTail->next = L.pHead; // Cập nhật vòng lặp
        }
        return;
    }
    
    // Duyệt danh sách để tìm node ở vị trí pos
    for (count = 0; current != NULL && count < pos; count++) {
        prev = current;
        current = current->next;
    }
    
    // Nếu `pos` vượt quá số node trong danh sách
    if (current == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    // Nếu xoá node cuối cùng
    if (current == L.pTail) {
        L.pTail = prev;
    }
    
    // Cập nhật liên kết để bỏ qua node cần xoá
    prev->next = current->next;
    delete current;
    
    // Đảm bảo danh sách vòng
    L.pTail->next = L.pHead;
}// function delete one student

void insertAStudentInPos (int &pos, list &L) {
    student s;
    cout << "Enter student id: ";
    cin >> s.id;
    
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, s.name);
    
    node* newNode = createNode(s);
    if (newNode == NULL) return;
    
    // Nếu danh sách rỗng, chèn luôn vào đầu
    if (L.pHead == NULL) {
        L.pHead = newNode;
        L.pTail = newNode;
        L.pTail->next = L.pHead; // Tạo vòng lặp
        return;
    }
    
    // Nếu chèn vào đầu danh sách
    if (pos == 0) {
        newNode->next = L.pHead;
        L.pHead = newNode;
        L.pTail->next = L.pHead; // Cập nhật pTail->next
        return;
    }
    
    // Duyệt danh sách để tìm vị trí chèn
    node* temp = L.pHead;
    int count = 0;
    while (temp->next != L.pHead && count < pos - 1) { // Duyệt đến vị trí trước `pos`
        temp = temp->next;
        count++;
    }
    
    // Nếu chèn vào cuối danh sách
    if (temp == L.pTail) {
        temp->next = newNode;
        newNode->next = L.pHead;
        L.pTail = newNode; // Cập nhật pTail
    } else { // Chèn vào giữa danh sách
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
