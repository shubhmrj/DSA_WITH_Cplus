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

        ~Node(){
            cout<<"Destuctor Called"<<endl;
        }
};


void insert_at_tail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail ->next = temp;
    tail = tail-> next;
    
}

void Delete_Duplicate(Node* &head){

    if(head == NULL) return;

    Node* j = head;


    while(j != NULL && j -> next != NULL){
        
        if(j -> data == j -> next -> data){
            Node * temp = j -> next;
            j -> next = temp -> next;
            temp -> next  = NULL;
            delete temp;
        }

        else{
            j = j -> next; 
        }
        
    }
    
}

void print(Node* & head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(2);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insert_at_tail(tail,3);
    insert_at_tail(tail,3);
    insert_at_tail(tail,3);
    insert_at_tail(tail,3);
    insert_at_tail(tail,4);
    insert_at_tail(tail,4);
    insert_at_tail(tail,5);
    insert_at_tail(tail,5);
    insert_at_tail(tail,5);

    print(head);

    cout<<endl;
    for(int i =5; i<10;i++){
        insert_at_tail(tail,i);
    }
    print(head);

    Delete_Duplicate(head);
    print(head);
    return 0;
}