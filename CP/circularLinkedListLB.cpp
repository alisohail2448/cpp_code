#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};


void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr->next;

        //1 Node Linked List
        if(prev == curr){
            tail = NULL;
        }

        //>=2 Node Linked List
        if(tail ==  curr){
            tail = prev;
        }
        curr ->next = NULL;
        delete curr;
    }
}

void printLL(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is Empty"<<endl;
    }

    do{
        cout<<tail -> data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}
    


 bool isCircularList(Node* head){
    if(head == NULL) return true;

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(head == temp) return true;
    
    return false;
 }

int main(){
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    printLL(tail);

    insertNode(tail, 3, 4);
    printLL(tail);

    insertNode(tail, 4, 8);
    printLL(tail);

    insertNode(tail, 8, 2);
    printLL(tail);

    deleteNode(tail, 3);
    printLL(tail);

    if(isCircularList(tail)){
        cout<<"Linked List is Circular"<<endl;
    }
    else{
         cout<<"Linked List is Not Circular"<<endl;
    }

    return 0;
}