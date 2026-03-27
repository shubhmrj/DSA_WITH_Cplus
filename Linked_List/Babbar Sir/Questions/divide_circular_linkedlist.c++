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

void circular_linked_list(Node* &head, int data){


    if(head == NULL){
        Node* val = new Node(data);
        head = val;
        val -> next = val;

    }

    else{
        Node* temp = head;

        while(temp != head){
            temp = temp -> next;
        }

        Node* value = new Node(data);

        value -> next = temp -> next;
        temp -> next = value;

        
    }
}


void divide_circular_linkedlist(Node* head,Node* &head1,Node* &head2){

    if(head == NULL){
        cout<< "Main Linked list is Empty ";
        return;
    }
    Node* temp = head -> next;

    int count = 1;
    while(temp != head){
        temp = temp -> next;
        count++;
    }

    Node* prev = NULL;
    Node* curr = head;
    
    int firstloop = count/2;
       
    Node* temp1 = head1;
    head1 = curr;

    for (int i = 0; i < firstloop; i++) {
        Node* nextNode = curr->next;
        prev = curr;
        temp1 = prev;
        temp1 -> data = prev-> data;
        curr = nextNode;
    }
    temp1 -> next = head1;

    Node* temp2 = head1;
    head2 = curr;

    for (int i = firstloop-1; i < count-1; i++) {
        Node* nextNode = curr->next;
        prev = curr;
        temp2 = prev;
        temp2 -> data = prev-> data;
        curr = nextNode;
    }
    temp2 -> next = head2;

}
void print(Node* head){
    if(head == NULL){
        cout<<"Circular Linked List is empty : ";
        return;
    }

    else{
        Node* temp = head;

        do{
            cout<< temp -> data << " ";
            temp = temp -> next;
        }while(temp != head);

        cout<<endl;
    }
}

int main(){

    Node* tail = NULL;
    Node* head1 = NULL;
    Node* head2 = NULL;

    circular_linked_list(tail,3);

    for(int i = 0; i < 12; i++){
        circular_linked_list(tail,i);
    }
    


    print(tail);


    divide_circular_linkedlist(tail,head1,head2);

    cout<<"LinkedList First Part is : ";
    print(head1);

    cout<<"LinkedList Second Part is : ";
    print(head2);
}