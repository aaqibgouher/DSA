#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    Node *left;
    int data;
    Node *right;

    Node(int data)
    {
        this->left = NULL;
        this->data = data;
        this->right = NULL;
    }
};

int height(Node *root, int val)
{
    if (root == NULL)
        return -1;

    if (root->data == val)
        return 0;

    return min(height(root->left, val), height(root->right, val)) + 1;
}

Node *findLCA(Node *root, int a, int b)
{
    if (root == NULL)
        return NULL;

    if (root->data == a || root->data == b)
        return root;

    Node *leftLCA = findLCA(root->left, a, b);
    Node *rightLCA = findLCA(root->right, a, b);

    if (leftLCA != NULL && rightLCA != NULL)
        return root;
    else if (leftLCA != NULL)
        return leftLCA;
    else if (rightLCA != NULL)
        return rightLCA;
    else
        return NULL;
}

int findMinDistance(Node *root, int a, int b)
{
    // find least common ancester
    Node *leastCommonAncester = findLCA(root, a, b);

    // height of a from lca
    int heightOfAFromLCA = height(leastCommonAncester, a);

    // height of b from lca
    int heightOfBFromLCA = height(leastCommonAncester, b);

    return heightOfAFromLCA + heightOfBFromLCA;
}

int main()
{
    /*
        1
       2 3
      4 5 6 7

    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(10);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << findMinDistance(root, 5, 6);

    return 0;
}