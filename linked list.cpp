//
//  main.cpp
//  linked list
//
//  Created by Mai Ngoc Diem My on 20/1/25.
//

#include <iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
// Declare the head pointer
struct node *head = NULL;

// Function prototype for insert_Node
void insert_Node(int x);
void print_List ();
int main(int argc, const char * argv[]) {
    int size;
    // Insert some nodes
    for (int i = 0; i < size; i++){
        insert_Node[i];
    }
    
    // Print the linked list
    cout << "Linked list contents: ";
    print_List();

    return 0;
}// main

void insert_Node (int x) {
    // Creating a new node
    struct node *new_node = new node;
    // Assigning data to the new node
    new_node->data = x;
    // Pointing the new node to the current head
    new_node->next=head;
    head=new_node; // Making the new node as the head
}// insert node

void print_List () {
    struct node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
