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
    while (temp->next != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* Merge(Node* &head1, Node* &head2){
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if(p1->data<p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    
    return dummyNode->next;

    // Node* p1 = head1;
    // Node* p2 = head2;
    // Node* dummyNode = new Node(-1);
    // Node* p3 = dummyNode;

    // while (p1 != NULL && p2 != NULL)
    // {
    //     if(p1->data<p2->data){
    //         p3->next= p1;
    //         p1 = p1->next;
    //     }
    //     else{
    //         p3->next = p2;
    //         p2 = p2->next;
    //     }
    //     p3 = p3->next;
    // }

    // while (p1 != NULL)
    // {
    //     p3->next = p1;
    //     p1 = p1->next;
    //     p3 = p3->next;
    // }
    // while (p1 != NULL)
    // {
    //     p3->next = p2;
    //     p2 = p2->next;
    //     p3 = p3->next;
    // }
    
    // return dummyNode->next;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 10);
    insertAtTail(head2, 9);
    insertAtTail(head2, 8);
    insertAtTail(head2, 11);
    display(head1);
    display(head2);
    Node* newHead = Merge(head1, head2);
    display(newHead);
    return 0;
}