#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertion(Node* &tail,int data, int element){

    if(tail ==NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
    }

    else{

        Node* curr = tail;
        
        while(curr != tail){
            curr = curr -> next;
        }

        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void Delete(Node* &tail, int element){

    if(tail == NULL){

        cout<< "List is empty : ";
        return;
    }

    else{
        Node* prev = tail;
        Node * curr = prev -> next;

        while(curr ->data != element){
            prev  =  curr ;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        
        //1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }
}
void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){

        cout<< "List is empty : ";
        return;
    }

    else{
        
        do{
            cout<< temp -> data <<" ";
            temp = temp -> next;
        }
        while(tail != temp);

        cout<< endl;
    }
}

int main(){
    // Node* node1 = new Node(10);
    Node* tail = NULL;
    
    // print(tail);

    insertion(tail,3,10);
    print(tail); 

    for(int i = 0; i < 10; i++){
        insertion(tail,i,3);
    }
    
    print(tail);

    insertion(tail,5,20);

    print(tail);

    cout<<"tail: "<<tail -> data<<endl;

    Delete(tail,3);

    print(tail);

}