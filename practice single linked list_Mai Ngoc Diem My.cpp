//
//  main.cpp
//  practice linked list (2)
//
//  Created by Mai Ngoc Diem My on 10/2/25.
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
node *createNode (int x);
void insertList (int &size, list &L);
void displayList (list &L);
node* insertBeginning (int x_new, list &L);
node* insertEnd (int x_new, list &L);
node* insertPos (list &L, int pos, int data);
node* removeFirstNode (list &L);
node* removeLastNode (list &L);
node* removePos (list &L, int pos);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
        
    int size;
    insertList(size, L);
    displayList(L);
    
    int x_new;
    cout << "Enter value to insert at the beginning: ";
    cin >> x_new;
    
    insertBeginning(x_new, L); // Gọi hàm chèn đầu danh sách
    displayList(L); // Hiển thị lại danh sách sau khi chèn
    
    cout << "Enter value to insert at the end: ";
    cin >>  x_new;

    L.pHead = insertEnd(x_new, L);
    displayList(L);
    
    // Nhập vị trí và dữ liệu để chèn vào danh sách
    int pos, data;
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> data;

    // Gọi hàm insertPos()
    L.pHead = insertPos(L, pos, data);

    // Hiển thị danh sách sau khi chèn
    displayList(L);
    
    L.pHead = removeFirstNode(L);
    cout << "\nAfter removing first node: " << endl;
    displayList(L);
    
    // Gọi hàm xóa node cuối
    L.pHead = removeLastNode(L);
    cout << "After removing last node: " << endl;
    displayList(L);
    
    // Nhập vị trí cần xóa
    cout << "Enter position to remove: ";
    cin >> pos;

    // Gọi hàm removePos()
    L.pHead = removePos(L, pos);

    // Hiển thị danh sách sau khi xóa
    cout << "Updated linked list: " << endl;
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
        if (newNode != NULL) {
            if (L.pHead == NULL) {
                // Nếu danh sách đang rỗng, cả pHead và pTail đều trỏ đến newNode
                L.pHead = L.pTail = newNode;
            } else {
                // Chèn vào cuối danh sách
                L.pTail->next = newNode;
                L.pTail = newNode;
            }
        }
    }
}// function insert node to linked list

void displayList (list &L) {
    if (L.pHead == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }
    
    cout << "Linked list: ";
    node* current = L.pHead;
    
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) cout << " -> ";
        current = current->next;
    }
    
    cout << endl;
}// function display linked list

node* insertBeginning (int x_new, list &L) {
    node* newNode = createNode(x_new);
    if (newNode == NULL) {
        cout << "Memory allocation failed!" << endl;
        return L.pHead;
    }
    
    newNode->next = L.pHead;
    L.pHead = newNode;
    
    if (L.pTail == NULL) {
        L.pTail = newNode;
    }

    return L.pHead;
}// insert a new node the the beginning of the linked list

node* insertEnd (int x_new, list &L) {
    node* newNode = createNode(x_new);
    if (L.pHead == NULL) {
        L.pHead = L.pTail = newNode; // Cả head và tail đều trỏ đến newNode
    } else {
        // Liên kết newNode vào cuối danh sách
        L.pTail->next = newNode;
        L.pTail = newNode; // Cập nhật pTail thành newNode
    }
    return L.pHead;
}// insert new node at the end

node* insertPos (list &L, int pos, int data) {
    if (pos < 1) {
        cout << "Invalid Position!" << endl;
        return L.pHead;
    }
    
    //Special case for inserting at the head
    if (pos == 1) {
        node* temp = createNode(data);
        temp->next = L.pHead;
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
        return L.pHead;
    }
    
    // Insert the new node at the specified position
    node* temp = createNode(data);
    temp->next = prev->next;
    prev->next = temp;
    return L.pHead;
}// insert at a specific position

node* removeFirstNode (list &L) {
    if (L.pHead == nullptr)
        return nullptr;
    // Move the head pointer to the next node
    node* temp = L.pHead;
    L.pHead = L.pHead->next;
    delete temp;
    return L.pHead;
}// delete the first node of the linked list

node* removeLastNode (list &L) {
    if (L.pHead == nullptr) {
        return nullptr; // Danh sách rỗng
    }
    
    // Nếu danh sách chỉ có một node
    if (L.pHead == L.pTail) {
        delete L.pHead;
        L.pHead = L.pTail = nullptr;
        return nullptr;
    }
    
    // Tìm node trước node cuối cùng
    node* prev = L.pHead;
    while (prev->next != L.pTail) {
        prev = prev->next;
    }
    
    // Xóa node cuối cùng
    delete L.pTail;
    prev->next = nullptr;
    L.pTail = prev; // Cập nhật pTail về node trước đó

    return L.pHead;
}

node* removePos (list &L, int pos) {
    if (L.pHead == nullptr || pos < 1) {
        cout << "Invalid position or empty list!" << endl;
        return L.pHead;
    }
    
    // Xóa node đầu tiên
    if (pos == 1) {
        node* temp = L.pHead;
        L.pHead = L.pHead->next;
        if (L.pHead == nullptr) {
            L.pTail = nullptr; // Nếu danh sách chỉ có 1 node, cập nhật pTail
        }
        delete temp;
        return L.pHead;
    }
    
    // Tìm node trước node cần xóa
    node* prev = L.pHead;
    int count = 1;
    while (count < pos - 1 && prev->next != nullptr) {
        prev = prev->next;
        count++;
    }
    
    // Nếu vị trí vượt quá số node trong danh sách
    if (prev->next == nullptr) {
        cout << "Position out of range!" << endl;
        return L.pHead;
    }
    
    // Lưu node cần xóa
    node* nodeToDelete = prev->next;
    
    // Cập nhật liên kết để bỏ qua node cần xóa
    prev->next = nodeToDelete->next;
    
    // Nếu xóa node cuối, cập nhật pTail
    if (nodeToDelete == L.pTail) {
        L.pTail = prev;
    }
    
    // Xóa node
    delete nodeToDelete;
    return L.pHead;
}
