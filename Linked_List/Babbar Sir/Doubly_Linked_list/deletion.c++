#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }

    ~Node(){
        cout << "Memory freed for node with data : " << data << endl;
    }
};

void insert_at_head(Node* &head, Node* &tail, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        
    }

    Node* temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(Node* &tail, Node* &head, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;

    tail = temp;
}

void insert_at_anypos(Node* &head, Node* &tail, int d, int pos){

    if(pos == 1){
        insert_at_head(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos-1 && temp->next != NULL){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insert_at_tail(tail, head, d);
        return;
    }

    Node* newnode = new Node(d);

    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
}

void Delete(Node* &head,Node* & tail, int pos){

    if(head == NULL) return;

    if(pos == 1){

        Node* temp = head;

        head = temp->next;

        if(head != NULL){
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    else{

        Node* curr = head;
        Node* prevNode = NULL;

        int count = 1;

        while(count < pos && curr != NULL){
            prevNode = curr;
            curr = curr->next;
            count++;
        }

        if(curr == NULL) return;

        if(curr->next == NULL){
            tail = tail ->prev;
        }

    


        else{
            curr->next->prev = prevNode;
        }
        
        prevNode->next = curr->next;


        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insert_at_head(head, tail, 25);
    print(head);

    cout << endl;

    for(int i = 0; i < 10; i++){
        insert_at_tail(tail, head, i);
    }

    print(head);

    insert_at_anypos(head, tail, 10, 3);
    print(head);

    Delete(head, tail,13);
    print(head);

    cout<< head -> data <<endl;
    cout<< tail -> data <<endl;
    return 0;
}