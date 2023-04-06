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

Node *buildBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = buildBST(root->left, val);
    }
    else
    {
        root->right = buildBST(root->right, val);
    }

    return root;
}

Node *deleteNode(Node *root, int val)
{
    // first search the element in bst
    if (val < root->data)
    {
        root->left = deleteNode(root->left, val)
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        // find it
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        else
        {
            // find inorder successor
        }
    }
}

void levelTreeTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> qu;

    qu.push(root);
    qu.push(NULL);

    while (!qu.empty())
    {
        Node *frontNode = qu.front();
        qu.pop();

        if (frontNode != NULL)
        {
            cout << frontNode->data << " ";
            if (frontNode->left != NULL)
            {
                qu.push(frontNode->left);
            }

            if (frontNode->right != NULL)
            {
                qu.push(frontNode->right);
            }
        }
        else if (frontNode == NULL && !qu.empty())
        {
            qu.push(NULL);
            cout << endl;
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildBST(root, 4);
    buildBST(root, 2);
    buildBST(root, 1);
    buildBST(root, 3);
    buildBST(root, 6);
    buildBST(root, 5);
    buildBST(root, 9);
    buildBST(root, 8);
    buildBST(root, 10);

    levelTreeTraversal(root);
    cout << endl;

    Node *newNode = deleteNode(root, 3);
    levelTreeTraversal(newNode);

    return 0;
}