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

void calcPointer(Node* root, Node** first, Node** mid, Node** last, Node** prev){
    if(root == NULL){
        return;
    }
    calcPointer(root->left, first, mid, last, prev);
    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }
        else{
            *last = root;
        }
    }
    *prev = root;
    calcPointer(root->right, first, mid, last, prev);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// Fixing Two nodes of a BST

//    Node* first = NULL, *second=NULL, *prev = NULL;
//   public:
//   void fix(Node* root){
//       if(!root) return;
//       fix(root->left);
      
//       if(prev && root->data < prev->data){
//           if(!first) first = prev;
//           second = root;
//       }
//       prev = root;
//       fix(root->right);
//   }
//     void correctBST( struct Node* root )
//     {
//         // add code here.
//       fix(root);
// swap(first->data, second->data);
//     }

void restoreBST(Node* root){
    Node* first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
    
    calcPointer(root, &first, &mid, &last, &prev);

    if(first && last){
        swap(&(first->data), &(last->data));
    }
    else if(first && mid){
        swap(&(first->data), &(mid->data));
    }
}

int main(){
    Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left= new Node(1);
    root->left->right= new Node(4);
    root->right->right= new Node(13);

    inOrder(root);
    restoreBST(root);
    cout<<endl;
    inOrder(root);
    return 0;
}