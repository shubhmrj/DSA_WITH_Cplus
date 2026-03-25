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

    Node* i = head;

    while(i -> next != NULL){

        Node* prev = i;
        Node* j = i -> next;

        while(j != NULL ){
            
            if(i -> data == j -> data){
                Node * temp = j;

                prev -> next = j -> next;
                j = j -> next;

                temp -> next  = NULL;
                delete temp;
            }
            

            else{
                prev = j;
                j = j -> next; 
            }
            
        }

        i = i -> next;
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
    insert_at_tail(tail,30);
    insert_at_tail(tail,3);
    insert_at_tail(tail,25);
    insert_at_tail(tail,4);
    insert_at_tail(tail,40);
    insert_at_tail(tail,30);
    insert_at_tail(tail,4);
    insert_at_tail(tail,25);

    print(head);

    cout<<endl;
    for(int i =2; i<10;i++){
        insert_at_tail(tail,i);
    }
    print(head);

    Delete_Duplicate(head);
    print(head);
    return 0;
}