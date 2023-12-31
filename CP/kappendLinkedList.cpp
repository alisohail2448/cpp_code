#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtTail(Node* &head, int val){
        Node* n = new Node(val);
        if(head == NULL){
            head = n;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
}

void display(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next; 
    }

    cout<<"NULL"<<endl;
    
}

int length(Node* &head){
    int l = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    // cout<<l<<endl;
    return l;
    
}


Node* Kappend(Node* &head, int k){
    Node* newHead;
    Node* newTail;
    Node* tail = head;

    int l = length(head);
    k=k%l;
    int count = 1;
    while (tail->next != NULL)
    {
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

// Node* Appendk(Node* &head,int k){
//     Node* temp=head;
//     Node* start;
//     int count=1;
//     while(temp->next!=NULL){
//         if(count==k)start=temp;
//         temp=temp->next;
//         count++;
//     }
//     Node* newhead=start->next;
//     start->next=NULL;
//     temp->next=head;
//     return newhead;
// }

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    Node* newHead = Kappend(head,3);
    display(newHead);
    return 0;
}