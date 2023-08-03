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


void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

Node* floydCycleDetection(Node* head){

    if(head == NULL) return NULL;

    Node* fast = head;
    Node* slow = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return slow;
    }
    return NULL;
}


Node* getStartingNodeOfCycle(Node* head){
    // Node* fast = head;
    // Node* slow = head;

    // while(fast && fast->next){
    //     slow = slow->next;
    //     fast = fast->next;
    //     if(slow == fast) break;
    // }

    // if(!(fast && fast->next)) return NULL;

    // while(head != slow){
    //     slow = slow->next;
    //     head = head->next;
    // }


    if(head == NULL) return NULL;
    
    Node* intersection = floydCycleDetection(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    Node* startOfLoop = getStartingNodeOfCycle(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        head -> next = temp -> next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        if(prev -> next == NULL){
            tail = prev;
        }
    }
}

void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){ 
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 22);
    tail->next = head->next;


    // printLinkedList(head);
    // insertAtHead(head, 20);
    // printLinkedList(head);

    // Node* tail = node1;
    // printLinkedList(head);
    // insertAtTail(tail, 20);
    // printLinkedList(head);
    // insertAtPosition(head, tail, 2, 15);
    // printLinkedList(head);
    // insertAtPosition(head, tail, 1, 11);
    // printLinkedList(head);
    // deleteNode(head, tail, 4);
    // printLinkedList(head);
    // cout<<"Head "<<head->data<<endl;
    // cout<<"Tail "<<tail->data<<endl;

    Node* loop = getStartingNodeOfCycle(head);
    cout<<"Loops start at "<<loop->data<<endl;

    if(floydCycleDetection(head)){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }

    removeLoop(head);
    printLinkedList(head);

    return 0;
}