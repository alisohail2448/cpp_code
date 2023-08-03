#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *right, *left;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

void Flatten(Node *root)
{
    if (root == NULL || root->left == NULL || root->right == NULL)
        return;

    if (root->left != NULL)
    {
        Flatten(root->left);
    }
    Node *temp = root->right;
    root->right = root->left;
    root->left = NULL;

    Node *t = root->right;
    while (t->right != NULL)
    {
        t = t->right;
    }
    t->right = temp;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
// Flatten binary tree to linked list
// Given a binary tree, flatten it into linked list in-place. Usage of auxiliary data structure is not allowed. After flattening, left of each node should point to NULL and right should contain next node in preorder.

//  Node* prev = NULL;
// void flatten(Node *root)
// {
//     //code here
//     if(root == NULL) return;

//         flatten(root->right);
//         flatten(root->left);

//    root->right = prev;
//    root->left = NULL;
//    prev = root;
// }

int main()
{
    Node *root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    Flatten(root);
    inOrder(root);
    cout << endl;
    return 0;
}