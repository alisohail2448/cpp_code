#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node* inOrderSucc(Node* root){
    Node* curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    inOrder(root);
    cout<<endl;
    deleteInBST(root, 5);
    inOrder(root);
    cout<<endl;
    return 0;
}