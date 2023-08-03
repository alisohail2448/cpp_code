#include<bits/stdc++.h>
using namespace std;
    
struct Node{
    int data;
    Node* next;
};

class Stack{
    Node* head;
    int size;

    public:
    
    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int d){
        Node* temp = new Node();
        temp->data = d;
        temp->next = head;
        head = temp;
    }

    void pop(){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    int top(){
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return head->data;
    }

    int stackSize(){
        return size;
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        return false;
    }
};
    
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    return 0;
}