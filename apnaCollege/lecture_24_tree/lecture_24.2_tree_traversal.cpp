#include<iostream>
using namespace std;

class Node {
    public:

    Node* left;
    int data;
    Node* right;

    Node(int data) {
        this -> left = NULL;
        this -> data = data;
        this -> right = NULL;
    }
};

// root -> left -> right
void preOrder(Node* root) {
    if(root == NULL) return;

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

// left -> root -> right
void inOrder(Node* root) {
    if(root == NULL) return;

    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

// left -> right -> root
void postOrder(Node* root) {
    if(root == NULL) return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}

int main() {
    /*
        Tree Structure:
              1
             / \ 
           2     3 
          / \   /  \ 
        4    5 6    7
    */

    // building above tree
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    // 1. Preorder traversal
    preOrder(root);
    cout << endl;

    // 2. Inorder traversal
    inOrder(root);
    cout << endl;

    // 3. Postorder traversal
    postOrder(root);

    return 0;
}