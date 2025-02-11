//
//  main.cpp
//  assignment double linked list
//
//  Created by Mai Ngoc Diem My on 11/2/25.
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
node* insertBegin (int x_new, list &L);
node* insertEnd (int x_new, list &L);
node* insertPos (list &L, int pos, int data);
node* removeFirstNode (list &L);
node* removeLastNode (list &L);
node* removePos (list &L, int pos);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L);
    
    int size;
    insertList (size, L);
    displayList (L);
    
    // Add element at the begining
    int x_new;
    cout << "\nEnter value to insert at the begining: ";
    cin >> x_new;
    
    insertBegin (x_new, L);
    displayList (L);
    
    // Add element at the end
    cout << "\nEnter value to insert at the end: ";
    cin >> x_new;
    
    insertEnd (x_new, L);
    displayList (L);
    
    // Add element at the specific position
    int pos, data;
    cout << "\nEnter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> data;

    L.pHead = insertPos(L, pos, data);
    displayList (L);
    
    // Delete first node
    L.pHead = removeFirstNode(L);
    cout << "\nAfter removing first node: " << endl;
    displayList(L);
    
    // Delete last node
    L.pHead = removeLastNode(L);
    cout << "\nAfter removing last node: " << endl;
    displayList(L);
    
    // Delete node at specific position
    cout << "\nEnter position to remove: ";
    cin >> pos;

    L.pHead = removePos(L, pos);
    displayList(L);
    
    return 0;
}// end main

void initialize (list &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}// create initialize double linked list

node *createNode (int x) {
    // Create new node
    node *p;
    p = new node;
    
    if (p == NULL) {
        cout << "Full list";
        return NULL;
    }
    
    p->data = x;
    p->prev = NULL;
    p->next = NULL;
    return p;
}// create node in double linked list

void insertList (int &size, list &L) {
    cout << "Enter the number of nodes in the list: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        int x;
        cout << "Enter the value for node " << i + 1 << ": ";
        cin >> x;
        
        node* newNode = createNode(x);
        if (newNode == NULL) {
            cout << "Memory allocation failed. Stopping insertion.\n";
            return; // Dung ham neu khong cap phat duoc bo nho
        }
        
        if (newNode != NULL) {
            if (L.pHead == NULL) {
                //Neu danh sach dang rong, ca pHead va pTail deu tro den newNode
                L.pHead = L.pTail = newNode;
            } else {
                // Chen vao cuoi danh sach
                L.pTail->next = newNode;
                newNode->prev = L.pTail;
                L.pTail = newNode;
            }
        }
    }
}// Insert element into double linked list

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
}// display double linked list

node* insertBegin (int x_new, list &L) {
    node* newNode = createNode(x_new);
    if (newNode == NULL) {
        cout << "Memory allocation failed" << endl;
        return L.pHead;
    }
    
    newNode->next = L.pHead;
    newNode->prev = NULL;
    
    if (L.pHead != NULL) { // Nếu danh sách không rỗng, cập nhật prev của nút đầu cũ
        L.pHead->prev = newNode;
    } else { // Nếu danh sách rỗng, cập nhật pTail luôn
        L.pTail = newNode;
    }
    
    L.pHead = newNode;
    
    return L.pHead;
}// insert new node at the begining

node* insertEnd (int x_new, list &L) {
    node* newNode = createNode(x_new);
    if (newNode == NULL) {
        cout << "Memory allocation failed" << endl;
        return L.pHead;
    }
    
    newNode->next = NULL;
    newNode->prev = L.pTail;
    
    if (L.pHead != NULL) { // Nếu danh sách không rỗng
        L.pTail->next = newNode;
    } else { // Nếu danh sách rỗng, cập nhật cả pHead và pTail
        L.pHead = newNode;
    }
    
    L.pTail = newNode; // Cập nhật pTail trong cả hai trường hợp
    
    return L.pHead;
}// Insert new node at the end

node* insertPos (list &L, int pos, int data) {
    if (pos < 1) {
        cout << "Invalid Position!" << endl;
        return L.pHead;
    }
    
    node* temp = createNode(data);
    if (temp == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return L.pHead;
    }
    
    //Special case for inserting at the head
    if (pos == 1) {
        temp->next = L.pHead;
        temp->prev = nullptr;
        if (L.pHead != nullptr) {
            L.pHead->prev = temp;
        } else {
            L.pTail = temp;  // Nếu danh sách rỗng, cập nhật luôn pTail
        }
        
        L.pHead = temp;
        return temp;
    }
    
    //Traverse the list to find the node before the insertion point
    node* prev = L.pHead;
    int count = 1;
    while (count < pos - 1 && prev != nullptr) {
        prev = prev->next;
        count++;
    }
    
    // If position is greater than the number of nodes
    if (prev == nullptr) {
        cout << "Invalid position!" << endl;
        delete temp;
        return L.pHead;
    }
    
    // Insert at the end of the linked list
    if (prev == L.pTail) {
        prev->next = temp;
        temp->prev = prev;
        temp->next = nullptr;
        L.pTail = temp;
        return L.pHead;
    }
    
    // Insert the new node at the specified position
    temp->next = prev->next;
    temp->prev = prev;
    prev->next->prev = temp;  // Cập nhật liên kết của nút sau
    prev->next = temp;
    
    return L.pHead;
}// insert at a specific position

node* removeFirstNode (list &L) {
    if (L.pHead == nullptr) {
        cout << "List is already empty!" << endl;
        return nullptr;
    }
    
    // Move the head pointer to the next node
    node* temp = L.pHead;
    L.pHead = L.pHead->next; // Dịch con trỏ đầu về node tiếp theo
    
    if (L.pHead != nullptr) {
        L.pHead->prev = nullptr;  // Cập nhật prev nếu danh sách còn phần tử
    } else {
        L.pTail = nullptr;  // Nếu danh sách chỉ có 1 phần tử, cập nhật luôn pTail
    }
    
    delete temp;
    return L.pHead;
}// delete the first node of the linked list

node* removeLastNode (list &L) {
    if (L.pHead == nullptr) {
        cout << "List is already empty!" << endl;
        return nullptr; // Danh sách rỗng
    }
    
    // Nếu danh sách chỉ có một node
    if (L.pHead == L.pTail) {
        delete L.pHead;
        L.pHead = L.pTail = nullptr;
        return nullptr;
    }
    
    // Cập nhật node trước L.pTail
    node* temp = L.pTail;
    L.pTail = L.pTail->prev;
    L.pTail->next = nullptr; // Ngắt liên kết với node bị xóa

    delete temp; // Giải phóng bộ nhớ
    return L.pHead;
}// delete the last node of the double linked list

node* removePos (list &L, int pos) {
    if (L.pHead == nullptr || pos < 1) {
        cout << "Invalid position or empty list!" << endl;
        return L.pHead;
    }
    
    // Xóa node đầu tiên
    if (pos == 1) {
        node* temp = L.pHead;
        L.pHead = L.pHead->next;
        
        if (L.pHead != nullptr) {
            L.pHead->prev = nullptr;  // Cập nhật prev nếu danh sách còn phần tử
        } else {
            L.pTail = nullptr;  // Nếu danh sách chỉ có 1 phần tử, cập nhật luôn pTail
        }
        
        delete temp;
        return L.pHead;
    }
    
    // Tìm node cần xóa
    node* nodeToDelete = L.pHead;
    int count = 1;
    while (count < pos && nodeToDelete != nullptr) {
        nodeToDelete = nodeToDelete->next;
        count++;
    }
    
    // Nếu vị trí vượt quá số node trong danh sách
    if (nodeToDelete == nullptr) {
        cout << "Position out of range!" << endl;
        return L.pHead;
    }
    
    // Cập nhật liên kết trước và sau node bị xóa
    if (nodeToDelete->prev != nullptr) {
        nodeToDelete->prev->next = nodeToDelete->next;
    }
        
    if (nodeToDelete->next != nullptr) {
        nodeToDelete->next->prev = nodeToDelete->prev;
    } else {
        // Nếu xóa node cuối, cập nhật pTail
        L.pTail = nodeToDelete->prev;
    }

    delete nodeToDelete;
    return L.pHead;
}// delete the specific node of the double linked list
