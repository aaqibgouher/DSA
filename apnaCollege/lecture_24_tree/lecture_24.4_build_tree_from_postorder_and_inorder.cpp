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

int search(int inOrder[], int start, int end, int val) {
    for(int i=start; i<=end; i++) {
        if(inOrder[i] == val) return i;
    }

    return -1;
}

Node* buildTree(int postOrder[], int inOrder[], int start, int end) {
    static int i = end;
    if(start > end) return NULL;

    int current = postOrder[i];
    i--;

    Node* node = new Node(current);

    if(start == end) return node;

    int position = search(inOrder, start, end, current);

    node -> right = buildTree(postOrder, inOrder, position + 1, end);
    node -> left = buildTree(postOrder, inOrder, start, position - 1);

    return node;
}

void inOrderTraversal(Node* root) {
    if(root == NULL) return;

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

int main() {
    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    int len = sizeof(postOrder) / sizeof(postOrder[0]);

    Node* root = buildTree(postOrder, inOrder, 0, len - 1);
    inOrderTraversal(root);

    return 0;
}