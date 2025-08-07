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
void Display(Node* head) {
    Node* p = head;
    if (p != NULL) {
        cout << p->data << " -> ";
        // p = p->next;
        Display(p->next);
    }
    cout<<endl;
}

void ReverseDisplay(Node* head) {
    Node* p = head;
    if (p != NULL) {
        ReverseDisplay(p->next);
        cout << p->data << " -> ";
    }
}

int main() {
    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A) / sizeof(A[0]);

    Node* head = create(A, n);

    Display(head);
    ReverseDisplay(head);

    return 0;
}
