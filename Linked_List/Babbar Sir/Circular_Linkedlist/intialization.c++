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

void insertion_cll(Node* &tail, int data, int element){

    if(tail == NULL){
        Node* new_node= new Node(data);
        tail = new_node;

        new_node -> next = new_node;
    }

    else{
        Node* curr = tail;
        
        while(curr != tail) {
            curr = curr -> next;
        }

        Node* temp = new Node(data);

        temp -> next = curr ->next;
        curr -> next = temp;
        
        // if(curr->data == element){

        //     Node* temp = new Node(data);

        //     temp -> next = curr ->next;
        //     curr -> next = temp;

        // }

        // else{
        //     cout<<" Element not found : ";
        // }

    
    }
}

void print (Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(tail != temp);

    cout<<endl;
}

int main(){
    // Node* node1 = new Node(10);
    Node* tail = NULL;
    
    // print(tail);

    insertion_cll(tail,3,10);
    print(tail); 

    for(int i = 0; i < 10; i++){
        insertion_cll(tail,i,3);
    }
    print(tail);

    insertion_cll(tail,5,20);

    print(tail);

    cout<<"tail: "<<tail -> data;

}