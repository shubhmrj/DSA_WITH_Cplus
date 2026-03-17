#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int data){
        this-> data = data;
        this -> next = NULL;
        this -> prev =NULL;
    }

    ~Node(){
        cout<<"desturctor called"<<endl;
    }
};

void insert_at_head(Node* &head,Node* &tail,int d){
    
    if (head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    Node* temp = new Node(d);

    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insert_at_tail(Node* &tail,Node* &head,int d){


     if (tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{
        Node* temp = new Node(d);

        tail ->next =  temp;
        temp  -> prev = tail;
        temp -> next = NULL;

        tail = temp;
    }
}

void insert_at_anypos(Node* &head, Node* &tail,int d,int pos){
    if(pos ==1){
        insert_at_head(head,tail,d);
        return;
    }

    Node* temp = head;

    int count =1;
    while(count < pos-1){
        temp = temp ->next;
        count++;
    }

    if(temp -> next == NULL){
        insert_at_tail(tail,head,d);
        return;
    }

    Node* newnode = new Node(d);

    newnode -> next = temp -> next;
    temp ->next ->prev = newnode;
    newnode -> prev = temp;

    temp -> next = newnode;

}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void Delete(Node* &head,int pos){

    if(pos == 1){
        Node* temp = head;

        head = temp-> next;

        temp -> next-> prev =NULL;
        temp -> next =NULL;
        delete temp;
    }
    else{

        int count =1;
        Node* temp = head;
        Node* prev = NULL;

        while(count<pos){
            prev = temp;
            temp = temp->next;
            count++;
        }

        prev -> next = temp -> next;

        temp -> next  = NULL;
        delete temp;
    }

}

int main(){
    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insert_at_head(head,tail,25);
    print(head);
    

    cout<<endl;
    for(int i =0; i<10;i++){
        insert_at_tail(tail,head,i);
    }
    print(head);

    insert_at_anypos(head,tail,10,3);
    print(head);

    Delete(head,1);
    print(head);
    return 0;

}