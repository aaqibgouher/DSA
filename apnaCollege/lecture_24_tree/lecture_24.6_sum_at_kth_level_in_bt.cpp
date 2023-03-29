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

void levelOrderTraversal(Node* root) {
    if(root == NULL) return;

    queue<Node*> qu;

    qu.push(root);
    qu.push(NULL);

    while(!qu.empty()) {
        Node* queueFront = qu.front();
        qu.pop();

        if(queueFront != NULL) {
            cout << queueFront -> data << " ";

            if(queueFront -> left != NULL) {
                qu.push(queueFront -> left);
            }

            if(queueFront -> right != NULL) {
                qu.push(queueFront -> right);
            }

        } else if(queueFront == NULL && !qu.empty()) {
            qu.push(NULL);
        }
    }
}

int getSumAtKthLevel(Node* root, int level) {
    if(root == NULL) return -1;

    queue<Node*> qu;
    int countLevel = 0;
    int sumLevel = 0;

    qu.push(root);
    qu.push(NULL);

    while(!qu.empty()) {
        Node* queueFront = qu.front();
        qu.pop();

        if(queueFront != NULL) {
            if(level == countLevel) {
                sumLevel += queueFront -> data;
            }

            if(queueFront -> left != NULL) {
                qu.push(queueFront -> left);
            }

            if(queueFront -> right != NULL) {
                qu.push(queueFront -> right);
            }

        } else if(queueFront == NULL && !qu.empty()) {
            qu.push(NULL);
            countLevel ++;
        }
    }

    return sumLevel;
}

int main() {
    /*
        1
       2 3
      4 5 6 7

    */

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right = new Node(3);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    // levelOrderTraversal(root);
    cout << getSumAtKthLevel(root, 3);

    return 0;
}