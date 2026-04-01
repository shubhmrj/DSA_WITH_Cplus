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

void insert_at_middle(Node* &tail,Node* &head,int d, int pos){
    
    if (pos == 1){
      insertathead(head,d);
      return;
    }
    
    Node* temp = head;


    int count = 1;

    while(count<pos-1){
        temp =temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insert_at_tail(tail,d);
        return;
    }
    
    Node* newnode = new Node(d);

    newnode -> next = temp ->next;

    temp -> next = newnode;
}

void Delete(int pos, Node* &head){
    
    if (pos == 1){
        Node* temp = head;
        head = head ->next;

        temp -> next = NULL;

        delete temp;
    }

    else{

        int count = 1;
        Node* curr = head;
        Node* prev = NULL;

        while(count<pos){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
        
    }
}



Node* reverseList(Node* &head, Node* &tail) {
    Node* prev = NULL;
    Node* curr = head;

    // old head becomes new tail
    tail = head;

    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode; 
    }

    head = prev;
    return head;
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
    print(head);

    insert_at_middle(tail,head,58,13);
    print(head);

    Delete(2,head);

    print(head);

    reverseList(head,tail);

    print(head);
}