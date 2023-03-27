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

int searchInOrder(int inOrder[], int start, int end, int search) {
    for(int i=start; i<=end; i++) {
        if(inOrder[i] == search) return i;
    }

    return -1;
}

Node* buildTree(int preOrder[], int inOrder[], int start, int end) {
    static int i = 0;

    if(start > end) return NULL;

    int current = preOrder[i];
    i++;

    Node* node = new Node(current);

    if(start == end) return node;

    int position = searchInOrder(inOrder, start, end, current);

    node -> left = buildTree(preOrder, inOrder, start, position - 1);
    node -> right = buildTree(preOrder, inOrder, position + 1, end);

    return node;
}

void inOrderTraversal(Node* root) {
    if(root == NULL) return;

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

int main() {
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    int len = sizeof(preOrder) / sizeof(preOrder[0]);

    Node* root = buildTree(preOrder, inOrder, 0, len - 1);

    inOrderTraversal(root);

    return 0;
}