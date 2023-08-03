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

Node* constructBst(int preOrder[], int *preOrderIdx, int key, int min, int max, int n){
    if(*preOrderIdx >= n){
        return NULL;
    }
    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preOrderIdx = *preOrderIdx + 1;

        if(*preOrderIdx < n){
            root->left = constructBst(preOrder, preOrderIdx, preOrder[*preOrderIdx], min, key, n);
        }

        if(*preOrderIdx < n){
            root->right = constructBst(preOrder, preOrderIdx, preOrder[*preOrderIdx], key,max, n);
        }
    }
    return root;
}

void printPreOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main(){
    int preOrder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preOrderIdx = 0;
    Node* root = constructBst(preOrder, &preOrderIdx, preOrder[0], INT_MIN, INT_MAX, n);
    printPreOrder(root);
    return 0;
}