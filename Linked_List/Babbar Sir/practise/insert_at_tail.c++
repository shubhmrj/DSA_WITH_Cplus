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

void search(int d, Node* &head){
    Node* temp = head;

    temp = head;

    while(temp != NULL){
        if(temp ->data == d){
            cout<<"yes"<<endl;
        }
        temp = temp -> next;
    }
    
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void delete_head(Node* &head){
    Node* temp = head;
    
    head = temp -> next;

    delete(temp);

    
}

int main(){
    Node* node1 = new Node(-1);
    Node* tail = node1;
    Node* head = node1;

    for(int i =0; i<10;i++){
        insert_at_tail(i,tail);
    }
    print(head);
    search(15,head);
    delete_head(head);

    cout<<head -> data;
}