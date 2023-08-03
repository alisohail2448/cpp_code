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

bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    if(root1 == NULL || root2 == NULL){
        return false;
    }

    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    if(isIdentical(root, root)){
        cout<<"BST are Identical"<<endl;
    }else{
        cout<<"BST are Not Identical"<<endl;
    }
    return 0;
}