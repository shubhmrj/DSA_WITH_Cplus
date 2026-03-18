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

void insert(Node* &tail, int data, int element){

    if(tail == NULL){
        Node* insert_node = new Node(data);
        tail = insert_node;

        insert_node ->next = tail;
    }

    else{
        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(data);

        temp -> next = curr ->next;
        curr -> next = temp;


    }
}

void print (Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }

    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* tail = node1;
    print(tail);
}