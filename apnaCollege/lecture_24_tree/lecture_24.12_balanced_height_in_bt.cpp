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
        }
    }
}

int main() {
    // Balanced height tree
    /*
        1
       2 3
     4 5 6 7

     print: 1 2 3 4 5 6 7
    */

    // creating tree
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right = new Node(3);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    levelTreeTraversal(root);

    return 0;
}