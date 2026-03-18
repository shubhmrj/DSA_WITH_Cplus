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

void insertion_cll(Node* &tail, int data, int element){

    if(tail == NULL){
        Node* insert_in_tail= new Node(data);
        tail = insert_in_tail;

        insert_in_tail ->next = tail;
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

void print (Node* &tail){
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
    // Node* node1 = new Node(10);
    Node* tail = NULL;
    
    print(tail);

    insertion_cll(tail,3,10);
    print(tail);

    for(int i = 0; i < 10; i++){
        insertion_cll(tail,i,10);
    }
    print(tail);
}