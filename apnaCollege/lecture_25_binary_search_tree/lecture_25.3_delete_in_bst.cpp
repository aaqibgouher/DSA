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

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }

    return root;
}

Node *inorderSucc(Node *root)
{
    Node *curr = root;

    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

Node *deleteInBst(Node *root, int key)
{
    // search that key
    if (key < root->data)
    {
        root->left = deleteInBst(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBst(root->right, key);
    }
    else
    {
        // delete if left is null
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        // delete if right is null
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // else delete node having two child
        else
        {
            Node *temp = inorderSucc(root->right);
            root->data = temp->data;
            root->right = deleteInBst(root->right, temp->data);
        }
    }

    return root;
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
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    insertBST(root, 6);

    levelTreeTraversal(root);
    cout << endl
         << endl;
    Node *newRoot = deleteInBst(root, 5);
    levelTreeTraversal(newRoot);

    return 0;
}