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


void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
}

bool search(Node* &head, int key){
    Node* temp = head;
    while (temp!= NULL)
    {
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
        
        return false;
    }
    
}

Node* ReverseK(Node* &head, int k){
    Node* currptr = head;
    Node* prevptr = NULL;
    Node* nextptr;
    int count = 0;

    while(currptr != NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr != NULL){
        head->next = ReverseK(nextptr, k);
    }

    return prevptr;
}

// void deletion(Node* &head, int val){
//     if(head == NULL){
//         return;
//     }
//     if(head->next == NULL){
//         deleteAtHead(head);
//         return;
//     }
//     Node* temp = head;
//     while(temp->next->data!=val){
//         temp = temp->next;
//     }
//     Node* todelete = temp->next;
//     temp->next= temp->next->next;

//     delete todelete;
// }

void deleteAtHead(Node* &head){
    Node* todelete = head;
    head = head->next;

    delete todelete;
}


Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        return head->next;
    }
    
    Node* currptr = head;
    Node* prevptr = NULL;
    Node* nextptr;
    
    while(--x){
        prevptr = currptr;
        currptr = currptr->next;
        nextptr = currptr -> next;
    }
    
    prevptr->next = nextptr;
    return head;
    
}


Node* Reverse(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}
    
Node* ReverseRecursive(Node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = ReverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
        return false;
}

void makeCycle(Node* &head, int pos){
    Node* temp = head;
    Node* startNode;
    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
  
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
    
    
}


void display(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    // display(head);
    // insertAtHead(head,4);
    // display(head);
    // cout<<search(head,5)<<endl;
    // deletion(head,3);
    // display(head);
    // deleteAtHead(head);
    // Node* newHead = Reverse(head);
    // display(newHead);
    // Node* newHead = ReverseRecursive(head);

    // Node* newHead = ReverseK(head,2);
    // Node* newHead = deleteNode(head,2);
    // display(newHead);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}
