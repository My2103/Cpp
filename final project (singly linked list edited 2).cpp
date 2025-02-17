//
//  main.cpp
//  final project (part 1)
//
//  Created by Mai Ngoc Diem My on 5/2/25.
//

#include <iostream>
using namespace std;
struct student {
    string id;
    string name;
    double IT_grade;
    double math_grade;
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
void insertStudent (int &size, list &L);
void displayStudent (list &L);
void sortAscAverageGrade (list &L);
int main(int argc, const char * argv[]) {
    list L;
    initialize(L); // Danh sách rỗng: L.pHead = NULL, L.pTail = NULL
    
    int size;
    insertStudent(size, L);
    
    displayStudent(L);
    
    sortAscAverageGrade(L);
    displayStudent(L);

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

void insertStudent (int &size, list &L) {
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
        
        cout << "Enter IT grade: ";
        cin >> s.IT_grade;
        
        cout << "Enter math grade: ";
        cin >> s.math_grade;
        
        cout << endl;
        
        node* newNode = createNode(s); // Tao node tu thong tin sinh vien vua nhap
        if (newNode != NULL) {
            if (L.pHead == NULL) {
                L.pHead = L.pTail = newNode;
            } else {
                L.pTail->next = newNode;
                L.pTail = newNode;
            }
        }
    }
}// function insert student

void displayStudent (list &L) {
    cout << "Linked list of student: " << endl;

    node* current = L.pHead; // Khai bao bien current
    while (current != NULL) {
        cout << "ID: " << current->data.id << "\n";
        cout << "Name: " << current->data.name << "\n";
        cout << "IT grade: " << current->data.IT_grade << "\n";
        cout << "Math grade: " << current->data.math_grade << "\n";
        cout << "Average grade: " << ((current->data.IT_grade) + (current->data.math_grade)) / 2.0 << "\n";
        cout << "--------------------------\n";
        current = current->next; // Di chuyen den node tiep theo
    }
}// function display student

void swapFunction (int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}// swap function

void sortAscAverageGrade (list &L) {
    if (L.pHead == NULL || L.pHead->next == NULL) {
        return; // Nếu danh sách rỗng hoặc chỉ có 1 phần tử, không cần sắp xếp
    }
    
    bool swapped;
    do {
        swapped = false;
        node* current = L.pHead;
        while (current != NULL && current->next != NULL) {
            double avg1 = (current->data.IT_grade + current->data.math_grade) / 2.0;
            double avg2 = (current->next->data.IT_grade + current->next->data.math_grade) / 2.0;
            
            if (avg1 > avg2) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
    
    cout << "\nThe linked list after sort acsending average grade: " << endl;
}
