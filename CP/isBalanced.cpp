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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Optimal Solution
bool optIsBalanced(Node *root, int *h)
{
    if (root == NULL)
    {
        return true;
    }
    int lh, rh = 0;
    if (optIsBalanced(root->left, &lh) == false)
    {
        return false;
    }
    if (optIsBalanced(root->right, &rh) == false)
    {
        return false;
    }
    *h = max(lh, rh) + 1;

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int h = 0;
    if (optIsBalanced(root, &h) == true)
    {
        cout << "Balanced Tree" << endl;
    }
    else
    {
        cout << "Unbalanced Tree" << endl;
    }
    return 0;
}