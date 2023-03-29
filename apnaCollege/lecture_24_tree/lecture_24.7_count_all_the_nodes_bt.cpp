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

int countNodes(Node* root) {
    if(root == NULL) return 0;

    return countNodes(root -> left) + countNodes(root -> right) + 1;
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

    cout << countNodes(root);

    return 0;
}