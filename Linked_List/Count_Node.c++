#include <iostream>
using namespace std;


// #include <iostream>
// using namespace std;
 
// class Node{
// public:
//     int data;
//     Node* next;
// };
 
// int main() {
 
//     int A[] = {3, 5, 7, 10, 15};
 
//     Node* head = new Node;
 
//     Node* temp;
//     Node* last;
 
//     head->data = A[0];
//     head->next = nullptr;
//     last = head;
 
//     // Create a Linked List
//     for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
//         // Create a temporary Node
//         temp = new Node;
 
//         // Populate temporary Node
//         temp->data = A[i];
//         temp->next = nullptr;
 
//         // last's next is pointing to temp
//         last->next = temp;
//         last = temp;
//     }
 
//     // Display Linked List
//     Node* p = head;
 
//     while (p != nullptr){
//         cout << p->data << " -> " << flush;
//         p = p->next;
//     }
 
//     return 0;
// }
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
}

// Count By Recursion
int Recursion(Node* head) {
    Node* r = head;
    if (r ==0){
        return 0;
    } 
    else {
        return Recursion(r->next) + 1;
    }
}

// Count through iteration
void Iteration(Node* head ) {
    Node* i = head;
    int count=0;
    while (i != 0) {
        count ++;
        i=i->next;
    }
    cout<<"Iterative count: "<<count;
}

int main() {
    int A[] = {3, 5, 7, 10, 15 ,16 , 17};
    int n = sizeof(A) / sizeof(A[0]);

    Node* head = create(A, n);

    Display(head);
    cout<<endl<<"Total Number of Element is : ";
    cout<<Recursion(head);
    Iteration(head);

    return 0;
}
