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

void insertathead(Node* &tail,int d){
    Node* temp = new Node(d);

    tail -> next = temp;

    tail = tail ->next;
    
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    // print(head);
    Node* tail = node1;


    insertathead(tail,25);
    print(head);

    cout<<endl;
    for(int i =0; i<10;i++){
        insertathead(tail,i);
    }
    print(head);
    return 0;
}