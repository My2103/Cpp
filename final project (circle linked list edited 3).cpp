//
//  main.cpp
//  practice sort
//
//  Created by Mai Ngoc Diem My on 20/2/25.
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
void insertList (int &size, list &L);
void traverseList (list L);
node* addNewStudent (list &L);
node* deleteAStudent (int &pos, list &L);
node* addNewPos (list &L, int &pos);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
       
    int size;
    insertList(size, L);
    traverseList(L);
    
    int choice, pos;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert a new student at the tail of the list\n";
        cout << "2. Delete a specific student\n";
        cout << "3. Insert at a specific position\n";
        cout << "4. Display circle linked list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "\nInsert a new student at the tail of the list" << endl;
                L.pHead = addNewStudent(L);
                break;
            case 2:
                cout << "\nDelete a specific student" << endl;
                cout << "Enter a postion to delete: ";
                cin >> pos;
                cout << endl;
                L.pHead = deleteAStudent(pos, L);
                break;
            case 3:
                cout << "\nInsert at a specific position" << endl;
                cout << "Enter a position to insert: ";
                cin >> pos;
                L.pHead = addNewPos(L, pos);
                cout << endl;
                break;
                    
            case 4:
                traverseList(L);
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
                break;
        
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
                    
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

void insertList (int &size, list &L) {
    cout << "Enter number of students: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        student s;
        cout << "Student " << i + 1 << endl;
        cout << "Enter student id: ";
        cin >> s.id;
            
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, s.name);
            
        cout << endl;
            
        node* newNode = createNode(s); // Tao node tu thong tin sinh vien vua nhap
        if (newNode != NULL) {
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
}// function insert student information to circle linked list

void traverseList (list L) {
    if (L.pHead == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    node* current = L.pHead;
    
    cout << "Circle linked list of student: " << endl;
    do {
        cout << "ID: " << current->data.id << endl;
        cout << "Name: " << current->data.name << endl;
        cout << "--------------------------\n";
        current = current->next;
    } while (current != L.pHead); // Dieu kien dung: khi quay lai pHead
}// display information of circle linked list

node* addNewStudent (list &L) {
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
            // Nếu danh sách đang rỗng, cả pHead và pTail đều trỏ đến newNode
            L.pHead = L.pTail = newNode;
            L.pTail->next = L.pHead; // Tao vong lap
        } else { // Chen cuoi danh sach
            L.pTail->next = newNode;
            L.pTail = newNode;
            L.pTail->next = L.pHead; // Cap nhat lai vong lap
        }
    }
    return L.pHead;
}// insert a new student into a circle linked list

node* deleteAStudent (int &pos, list &L) {
    if (L.pHead == nullptr || pos < 1) {
        cout << "Invalid position or empty list!" << endl;
        return L.pHead;
    }
    
    node* temp = L.pHead;
    
    // If just have one node in linked list
    if (L.pHead == L.pTail) {
        if (pos == 1) { // Just delete the only current node
            delete L.pHead;
            L.pHead = L.pTail = nullptr;
        } else {
            cout << "The position out of range!" << endl;
        }
        return L.pHead;
    }
    
    // If delete the first node
    if (pos == 1) {
        L.pHead = L.pHead->next;
        L.pTail->next = L.pHead;
        delete temp;
        return L.pHead;
    }
    
    // Xoa o cac vi tri giua trong linked list
    // Find the prev node of the delete node
    node* prev = L.pHead;
    int count = 1;
    while (count < pos - 1 && prev->next != L.pHead) {
        prev = prev->next;
        count++;
    }
    
    // Neu vi tri can xoa vout qua so node hien co
    if (prev->next == L.pHead) {
        cout << "Position out of range!" << endl;
        return L.pHead;
    }
    
    // Node can xoa
    node* nodeToDelete = prev->next;
    prev->next = nodeToDelete->next; // Cap nhat prev next de bo qua node can xoa
    
    // Cap nhat lai Tail neu node can xoa la node cuoi cung
    if (nodeToDelete == L.pTail) {
        L.pTail = prev;
        L.pTail->next = L.pHead;
    }
    
    delete nodeToDelete;
    return L.pHead;
}// function delete one student in a specific position in cỉrcle linked list

node* addNewPos (list &L, int &pos) {
    if (pos < 1) {
        cout << "Invalid Position!" << endl;
        return L.pHead;
    }
    
    student s;
    cout << "Enter student id: ";
    cin >> s.id;
    
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, s.name);
    
    node* temp = createNode(s);
    if (temp == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return L.pHead;
    }
    
    // Insert in a empty linked list
    if (L.pHead == nullptr) {
        L.pHead = L.pTail = temp;
        L.pTail->next = L.pHead; // Circle linked list
        return L.pHead;
    }
    
    // Insert at the begin
    if (pos == 1) {
        temp->next = L.pHead;
        L.pHead = temp;
        L.pTail->next = L.pHead; // Cap nhat danh sach vong
        return L.pHead;
    }
    
    // Find the position need to insert
    node* prev = L.pHead;
    int count = 1;
    while (count < pos - 1 && prev->next != L.pHead) {
        prev = prev->next;
        count++;
    }
    
    // Insert at the end of the linked list
    if (prev->next == L.pHead) {
        L.pTail = temp; // Cap nhat lai tail
    }
    
    // Chen vao vi tri cu the
    temp->next = prev->next;
    prev->next = temp;
    
    return L.pHead;
}// function add new node to a specific pos
