//
//  main.cpp
//  practice algorithm
//
//  Created by Mai Ngoc Diem My on 27/2/25.
//
#define MAX 100
#include <iostream>
using namespace std;
struct node {
    int key;
    struct node* left;
    struct node* right;
};
void init_tree (node* &root);
int empty_tree (node *root);
node* createBST();
void inorderTraversal(node* root);
node* createNode(int data);
node* insert(node* root, int data);
node* search(node* root, int number);
struct node *deleteNode (struct node *root, int key);
struct node *minValueNode (struct node *node);
int main(int argc, const char * argv[]) {
    node* root = createBST();  // Create BST from user input

    cout << "In-order traversal of the BST: ";
    inorderTraversal(root);  // Check if BST is created properly
    cout << endl;
    
    return 0;
}// end main

void init_tree (node* &root) {
    root = NULL;
}

// Check empty tree
int empty_tree (node *root) {
    if (root == NULL)
        return 1;
    else
        return 0;
}

struct node *newNode (int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

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
}

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
}

void inorderTraversal(node* root) {
    // Empty Tree
    if (root == nullptr)
        return;
      
    // Recur on the left subtree
    inorderTraversal(root->left);
     
    // Visit the current node
    cout << root->key << " ";
      
    // Recur on the right subtree
    inorderTraversal(root->right);
}

// Function to search for a value in the BST
node* search(node* root, int number) {
    if (root == NULL)
        return NULL;
        
    if (number == root->key)
        return root;
        
    if (number < root->key)
        return search(root->left, number);  // Fix: Pass 'number' in recursive call
    
    return search(root->right, number);
}

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

