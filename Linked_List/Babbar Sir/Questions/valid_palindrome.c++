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


void insert_at_tail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail ->next = temp;
    tail = tail-> next;
    
}

Node* mid_node(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast -> next !=NULL && fast -> next -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;

}

Node* reverseList(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode; 
    }

    return prev;
}

bool valid_palindrome(Node* head){
    
    Node* mid_element = mid_node(head);
    Node* temp = mid_element -> next;

    mid_element -> next = reverseList(temp);


    Node* head1 = head;
    Node* head2 = mid_element -> next;

    while(head2 != NULL){

        if(head1 -> data != head2 -> data){
                return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    return true;
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
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insert_at_tail(tail,2);
    print(head);

    cout<<endl;
    for(int i =3; i>0;i--){
        insert_at_tail(tail,i);
    }
    print(head);

    cout<<valid_palindrome(head);

    return 0;
}