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





Node* reverseList(Node* &l1) {
    Node* prev = NULL;
    Node* curr = l1;

    // old head becomes new tail
    // tail = head;

    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode; 
    }

    l1 = prev;
    return l1;
}

Node* addTwoNumbers(Node* l1,Node* l2) {
    l1 = reverseList(l1);
    l2 =  reverseList(l2);

        Node* temp1 =l1;
        Node* temp2 = l2;
        int n1 = 0;
        int n2 = 0;

        while(temp1 != NULL){

            n1 = n1 * 10 + temp1 ->data;
            temp1 = temp1 -> next;

        }
                    
        cout<< "n1 : "<< n1<<endl;

        while(temp2  != NULL){
            n2 = n2 * 10 + temp2 ->data;
            temp2 = temp2 -> next;
        }
        cout<< "n2 : "<< n2<<endl;

        int sum = n1 + n2;

        Node* tail = l1;
        while(sum > 0){
            int res = sum % 10 ;
            Node* newnode = new Node(res);
            tail  -> next = newnode;
            // tail -> data = newnode -> data;
            tail = tail -> next;

            sum = sum /10;
        }
        Node* removehead = l1;
         
        l1 = l1 -> next;
        removehead -> next = NULL;

    return l1;
}

// this correct not give overflow error
Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummy = new Node(0);
        Node* current = dummy;
        int carry =0;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int val1 = (l1!=nullptr) ? l1->val : 0;
            int val2 = (l2!=nullptr) ? l2->val : 0;

            int sum = val1+val2+carry;
            carry = sum/10;
            int digit = sum%10;

            current->next = new Node(digit);
            current=current->next;
            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;

        }
        return dummy->next;
    }

int main(){

    Node* newnode1 = new Node(3);

    Node* newnode2 = new Node(4);
    
    Node* l1 = newnode1;
    Node* l2 = newnode2;

    insertathead(l1,4);
    insertathead(l1,2);

   
    insertathead(l2,6);
    insertathead(l2,5);
   
    print(l1);

    print(l2);

    l1 = addTwoNumbers(l1,l2);

    print(l1);
    print(l2);





    

}