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

void leftViewOfBT(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> qu;

    qu.push(root);

    while (!qu.empty())
    {
        int size = qu.size();

        for (int i = 0; i < size; i++)
        {
            Node *frontNode = qu.front();
            qu.pop();

            if (i == 0)
            {
                cout << frontNode->data << " ";
            }

            if (frontNode->left != NULL)
            {
                qu.push(frontNode->left);
            }

            if (frontNode->right != NULL)
            {
                qu.push(frontNode->right);
            }
        }
    }
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

    leftViewOfBT(root);

    return 0;
}