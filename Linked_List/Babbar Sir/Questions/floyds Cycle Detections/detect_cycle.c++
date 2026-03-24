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


bool iscircular(Node* &head){

    if(head == NULL){
        return false;
    }
    // Node* temp = head;
    Node* fast = head;
    Node* slow = head;


    while(fast != NULL && slow !=NULL){

        slow = slow-> next;
        fast = fast -> next -> next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}



int main(){

    Node* newnode1 = new Node(10);

    Node* head = newnode1;
    Node* tail = newnode1;

    print(head);

    insert_at_tail(tail,25);
    print(head);

    cout<<endl;
    for(int i =0; i<10;i++){
        insert_at_tail(tail,i);
    }
    print(head);

    tail ->next = head -> next;
    
    cout<<iscircular(head);

}