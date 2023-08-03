#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the Data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting node in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting node in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }



void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
        }
    }
}

void reverseLevelOrderTraversal(Node *root){
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp){
            s.push(temp); 
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
    }

    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        cout << temp->data << " ";
    }
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    inOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(Node *&root)
{
    queue<Node *> q;
    cout << "Enter root data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;

    // buildFromLevelOrder(root);
    // cout << "Level of Tree" << endl;
    // levelOrderTraversal(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
     root = buildTree(root);

    cout<<"Printing Levels of Tree"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Reverse Levels of Tree"<<endl;
    reverseLevelOrderTraversal(root);

    // cout << "inOrder Traversal is : " << endl;
    // inOrder(root);
    // cout << endl;
    // cout << "preOrder Traversal is : " << endl;
    // preOrder(root);
    // cout << endl;
    // cout << "postOrder Traversal is : " << endl;
    // postOrder(root);
    return 0;
}