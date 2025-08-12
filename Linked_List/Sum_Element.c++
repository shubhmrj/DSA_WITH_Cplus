#include <iostream>
using namespace std;



class Node {
public:
    int data;
    Node* next;
};

// Create and return head of linked list
Node* create(int A[], int size) {
    Node* head = new Node;
    head->data = A[0];
    head->next = nullptr;

    Node* last = head;
    Node* temp;

    for (int i = 1; i < size; i++) {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp;
    }
    return head;
}

// Display the linked list
void Display(Node* head ) {
    Node* p = head;
    if (p != NULL) {
        cout << p->data << " -> ";
        Display(p->next);
    }
    // cout<<endl;
}

// Addition of elements iterative

void sum(Node* head) {
    Node* r = head;
    int add  = 0;
    while(r != NULL) {
        add+=r->data;
        r=r->next;
    }
    cout<<"Addition: "<<add;
}

//Recursive addition
int recursive(Node* head ) {
    Node* r = head;
    if (r==0){
        return 0;
    }
    else {
        return recursive(r->next)+ r->data;
    }
}

int main() {
    int A[] = {3, 5, 7, 10, 15, 16,17};
    int n = sizeof(A) / sizeof(A[0]);

    Node* head = create(A, n);

    Display(head);
    cout<<endl;
    sum(head);
    cout<<endl;
    cout<<"Recursive: "<<recursive(head);

    return 0;
}
