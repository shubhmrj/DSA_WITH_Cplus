
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



    /*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    
    while(curr != NULL){
        Node* nextadd = curr -> next;
        curr -> next = prev;
        prev = curr ;
        curr = nextadd;
    }
    return prev;
    
}

Node* addTwoLists(Node* head1, Node* head2) {
    // code here
    Node* head11 = reverse(head1);
    Node* head12 = reverse(head2);
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    Node* result = NULL;
    
    int carry = 0;
    
    while(head11 || head12 || carry){
        int sum = carry;
        if(head1){
            sum += head11 -> data;
            head11 = head11 -> next;
        }
        if(head2){
            sum += head12 -> data;
            head12 = head12 -> next;
        }
        
        carry = sum/10;
        
        temp -> next = new Node(sum % 10);
        temp = temp -> next;
        
    }
    Node* finalu = dummy -> next;
    result = reverse(finalu);
    return result;
    }

};