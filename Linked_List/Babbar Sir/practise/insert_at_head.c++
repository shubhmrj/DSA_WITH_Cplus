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

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
    
}


int main(){
    Node* node1 = new Node(1);
    Node* head = node1; 

    insert_at_head(10,head);
    print(head);

    for(int i = 0; i < 5; i++){
        insert_at_head(i,head);
    }
    print(head);
}