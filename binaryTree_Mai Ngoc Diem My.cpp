//
//  main.cpp
//  binary tree homework
//
//  Created by Mai Ngoc Diem My on 27/2/25.
//

#include <iostream>
using namespace std;
struct node {
    int key;
    struct node* left;
    struct node* right;
};
void init_tree (node* &root);
int empty_tree (node *root);
struct node *newNode (int item);
struct node *insert (struct node *node, int key);
node* createBST();
void inorderTraversal(node* root);
void preorderTraversal(node* root);
node* search(node* root, int number);
void searchAndPrint(node* root, int number);
struct node *minValueNode (struct node *node);
struct node *deleteNode (struct node *root, int key);
int main(int argc, const char * argv[]) {
    node* root = createBST();  // Create BST from user input

    cout << "Traversal of the BST: ";
    preorderTraversal(root);
    cout << endl;
    
    // Deleting a node
    int keyToDelete;
    cout << "Enter a number to delete: ";
    cin >> keyToDelete;
        
    root = deleteNode(root, keyToDelete);

    cout << "BST after deleting " << keyToDelete << ":\n";
    preorderTraversal(root);
    cout << endl;
    
    int number;
    cout << "Enter a number to search in the BST: ";
    cin >> number;

    searchAndPrint(root, number);  // Search and print result

    return 0;
}// end main

void init_tree (node* &root) {
    root = NULL;
}// function init_tree

int empty_tree (node *root) {
    if (root == NULL)
        return 1;
    else
        return 0;
}// function empty tree

struct node *newNode (int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}// function create new node

struct node *insert (struct node *node, int key) {
    // Return a new node if the tree is empty
    if (node == NULL)
        return newNode(key);
    
    // Traverse to the right place and insert the node
    if (key < node->key) {
        node->left = insert(node->left, key);
    } else {
        node->right = insert(node->right, key);
    }
    
    return node;
}// function insert node

node* createBST() {
    node* root = NULL;
    int n, value;
    
    cout << "Enter the number of elements in the BST: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Index [" << i << "] = ";
        cin >> value;
        root = insert(root, value);
    }

    return root;
}// function create BST

void preorderTraversal(node* root) {
  if (root == NULL)
    return;

  cout << root->key << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

node* search(node* root, int number) {
    if (root == NULL)
        return NULL;
        
    if (number == root->key)
        return root;
        
    if (number < root->key)
        return search(root->left, number);
    
    return search(root->right, number);
}// function search node

void searchAndPrint(node* root, int number) {
    node* result = search(root, number);
    
    if (result)
        cout << "Number " << number << " found in the BST." << endl;
    else
        cout << "Number " << number << " not found in the BST." << endl;
}// search and print function

// Delete node function
struct node *minValueNode (struct node *node) {
    struct node *current = node;
    
    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;
    
    return current;
}

struct node *deleteNode (struct node *root, int key) {
    // Return if the tree is empty
    if (root == NULL)
        return root;
    // Find the node ot be deleted
    if (key < root-> key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        // If the node is with only one child or no child
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        
        // If the node has two children
        struct node *temp = minValueNode(root->right);
        
        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;
        
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}


