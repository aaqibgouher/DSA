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

int sumNodes(Node* root) {
    if(root == NULL) return 0;

    return sumNodes(root -> left) + sumNodes(root -> right) + root -> data;
}


int main() {
    /*
        1
       2  3
      4 5 6 7

    */
    
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right = new Node(3);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    cout << sumNodes(root);

    return 0;
}