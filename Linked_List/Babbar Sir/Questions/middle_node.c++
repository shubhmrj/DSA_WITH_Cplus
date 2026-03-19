#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next =NULL;
    }
};

void insertathead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;

    head = temp;
}

void insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &head){
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }

    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* middle(Node* &head){

    Node* temp = head;
    Node* temp1 = head;


    int length = 1;

    while(temp -> next != NULL){
        temp = temp -> next;
        length ++;
    }
    
    int mid = length/2;

    int length1 = 1;

    while(length1 < mid){
        temp1 = temp1 ->next;
        length1++;
    }
    Node* forward = temp1 -> next;
    temp1 -> next = NULL;
    

    head = forward;
    return head;
}

int main(){

    Node* newnode1 = new Node(1);

    Node* head = newnode1;
    Node* tail = newnode1;

    print(head);

    

    for(int i =2; i<12;i++){
        insert_at_tail(tail,i);
    }
    
    print(head);

    middle(head);

    print(head);
    

}