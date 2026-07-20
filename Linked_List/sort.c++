#include<iostream>

using namespace std;


class Node{

    public:
        int data;
        Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_at_head(int d, Node* &head){
    Node* temp = new Node(d);

    temp -> next = head;

    head = temp;
}

void insert_at_tail(int d, Node* &tail){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = tail-> next;
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* middle(Node* &head){
    Node* slow = head;
    Node* fast = slow -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

void merge(Node* &head){
    Node *dummy = new Node(0);
    Node* temp = dummy -> next;

    while(temp1 != )
}


void mergesort(Node* &head){

    

    Node* mid = middle(head);

    mergesort(head);
    mergesort(head);

    merge(head);    
}

int main(){
    Node* node1 = new Node(-1);
    Node* tail = node1;
    Node* head = node1;

    for(int i =0; i<10;i++){
        insert_at_tail(i,tail);
    }
    print(head);

    cout<<head -> data;
}