//
//  main.cpp
//  linked list (1)
//
//  Created by Mai Ngoc Diem My on 23/1/25.
//

#include <iostream>
using namespace std;
struct node {
    int data;
    struct node*next;
};
struct list {
    node *pHead;
    node *pTail;
};
node* createNode (int x);
void initialize (list &L);
void insertSpecific(node* current, int value);
int main(int argc, const char * argv[]) {
    // Bước 1: Khởi tạo danh sách liên kết
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL

    int value, value1, value2, value3;
    value = 10;
    value1 = 20;
    value2 = 30;
    value3 = 40;
    
    // Bước 2: Tạo các giá trị cần thêm
    int values[] = {10, 20, 30, 40};
    int n = sizeof(values) / sizeof(values[0]);

    // Bước 3: Thêm các giá trị vào danh sách liên kết
    for (int i = 0; i < n; i++) {
        node* newNode = createNode(values[i]);
        if (newNode != NULL) {
            newNode->next = L.pHead; // Trỏ đến head hiện tại
            L.pHead = newNode;       // Cập nhật head

            // Nếu danh sách trước đó rỗng, cập nhật tail
            if (L.pTail == NULL) {
                L.pTail = newNode;
            }
        }
    }
    
    // Duyệt đến vị trí chèn (nút có giá trị 30)
    node* current = L.pHead;
    while (current != NULL && current->data != 30) {
        current = current->next;
    }

    // Chèn 50 sau nút có giá trị 30
    insertSpecific (current, 50);

    
    // Bước 4: Duyệt danh sách và in tất cả các giá trị
    cout << "Linked list: ";
    current = L.pHead;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next; // Di chuyển đến nút tiếp theo
    }
    cout << endl;
    
    return 0;
}// end main

void initialize (list &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}// initialize

node* createNode (int x) {
    //Create a new node
    node *p;
    p = new node;
    if (p==NULL) {
        cout << "Full list";
        return NULL;
    }
    p->data=x;
    p->next=NULL;
    return p;
}// create node

/*void insertSpecific(node* current, int value) {
    if (current == NULL) {
        cout << "Vị trí hiện tại không hợp lệ!" << endl;
        return;
    }
    
    // Tạo nút mới
    node* newNode = createNode(value);
    if (newNode == NULL) {
        cout << "Không thể tạo nút mới!" << endl;
        return;
    }
    
    // Chèn nút mới vào sau current
    newNode->next = current->next;
    current->next = newNode;
}*/

node* insertPos (list &LIST, int pos, int data) {
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return LIST.pHead;
    }
    //Special case for inserting at the head
    if (pos == 1) {
        node* temp = createNode(data);
        temp->next = LIST.pHead;
        return temp;
    }
    
    //Traverse the list to find the node before the insertion point
    node* prev = LIST.pHead;
    int count = 1;
    while (count < pos - 1 && prev != nullptr) {
        prev = prev->next;
        count++;
    }
    //If position is greater than the number
    if (prev == nullptr) {
        cout << "Invalid position!" << endl;
        return LIST. pHead;
    }
    // Insert the new node at the specified position
    node* temp = createNode(data) ;
    temp->next = prev->next;
    prev->next = temp; return LIST. pHead;
}
