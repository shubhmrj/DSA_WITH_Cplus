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




Node* reverseList(Node* &head,int k) {

    if (head == NULL || k == 1) return head;

    int count = 1;
    Node* temp = head;
    Node* newHead     = NULL;     

    Node* prevGroupTail = NULL;

    while(temp -> next != NULL){
        temp = temp -> next ;
        count++;
    }


    Node* curr = head;
    int loop = count/k;

    while (loop !=0) {

        Node* first = curr;
        Node* prev = NULL;

        int counter = 0;

        while(curr != NULL && counter < k){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode; 
            counter ++;

        }

        

        if(newHead == NULL){
            newHead = prev;
        }

        if (prevGroupTail != NULL)  // i foget this;
            prevGroupTail->next = prev;
        
        first-> next = curr;
        prevGroupTail = first;
        loop--;

    }
    head = newHead;
    return newHead;    
}

Node* recursion_rev(Node*& head, int k){
    
    if(head== NULL){
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* nextNode = NULL;

    int counter = 0;

    while(curr != NULL && counter < k){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode; 
            counter ++;

    }

    if(nextNode != NULL){
        head -> next = recursion_rev(nextNode,k);
    }

    return prev;
}


int main(){

    Node* newnode1 = new Node(10);

    Node* head = newnode1;
    Node* tail = newnode1;

    print(head);

    insert_at_tail(tail,25);
    print(head);

    cout<<endl;
    for(int i =0; i<3;i++){
        insert_at_tail(tail,i);
    }
    

    print(head);

    head = reverseList(head,3);

    // head = recursion_rev(head,3);

    print(head);

}