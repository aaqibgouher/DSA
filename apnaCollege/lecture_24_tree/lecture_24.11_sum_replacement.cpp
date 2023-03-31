#include<iostream>
#include<queue>
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

void levelTreeTraversal(Node* root) {
    if(root == NULL) return;

    queue<Node*> qu;

    qu.push(root);
    qu.push(NULL);

    while(!qu.empty()) {
        Node* frontNode = qu.front();
        qu.pop();

        if(frontNode != NULL) {
            cout << frontNode -> data << " ";
            if(frontNode -> left != NULL) {
                qu.push(frontNode -> left);
            }

            if(frontNode -> right != NULL) {
                qu.push(frontNode -> right);
            }
        } else if(frontNode == NULL && !qu.empty()) {
            qu.push(NULL);
            cout << endl;
        }
    }
}

void sumReplace(Node* root) {
    if(root == NULL) return;

    sumReplace(root -> left);
    sumReplace(root -> right);

    if(root -> left != NULL) {
        root -> data += root -> left -> data;
    }

    if(root -> right != NULL) {
        root -> data += root -> right -> data;
    }
}

int main() {
    // Sum replacement: replace the value of each node with the sum of all subtree nodes and itself
    /*
        1
       2 3
      4 5 6 7
     8 9
    10
    */

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> left -> left -> left = new Node(8);
    root -> left -> left -> right = new Node(9);
    root -> left -> left -> left -> left = new Node(10);
    root -> right = new Node(3);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    // levelTreeTraversal(root);
    sumReplace(root);

    levelTreeTraversal(root);

    return 0;
}