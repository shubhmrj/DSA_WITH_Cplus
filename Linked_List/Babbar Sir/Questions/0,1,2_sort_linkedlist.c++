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

void insertathead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}


void insert_at_tail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail ->next = temp;
    tail = tail-> next;
    
}

// Approch1
// count all three element

Node* sorttheelement(Node* &head){
    Node* temp = head;

    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;

    while(temp != NULL){

        if(temp -> data == 0){
            zero_count++;
        }
        else if(temp -> data == 1){
            one_count++;
        }
        else if(temp -> data == 2){
            two_count++;
        }
        temp = temp -> next;


    }

    temp = head;
    // Node* headdir = temp;

    while(temp != NULL){

        if(zero_count != 0){
            temp -> data  = 0;
            zero_count--;
        }
        else if(one_count !=0){
            temp -> data = 1;
            one_count--;
        }
        else if(two_count != 0){
            temp -> data = 2;
            two_count--;
        }
        temp = temp -> next;
    }

    return head;

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
    Node* node1 = new Node(0);

    Node* head = node1;
    // Node* tail = node1;
    print(head);

    insertathead(head,1);
    insertathead(head,0);
    insertathead(head,2);
    insertathead(head,1);
    print(head);

    cout<<endl;
    for(int i =0; i<3;i++){
        insertathead(head,i);
    }

    print(head);

    head = sorttheelement(head);
    print(head);
    return 0;
}