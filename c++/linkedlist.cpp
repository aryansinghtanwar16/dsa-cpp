/*
What is a linked list 
=
Linear data structure used to store a list of values

Challenges of Array thats why were using linked list 
- Static size
- contiguos memory allocation
- inserting and deleting is costly O(n)

Advantages of Linked list 

- dynamic size
-non-contiguous memory allocation
insertion and deletion is non expensive 

Listnode 
blocks of memory is called node


Types of linked list
1 Singly linked list- Every node points to its successor node 
2 Doubly linked list -Every node is connected to its previous & next node.


Implementation of a listnode in a singly linked list

class Node {

int val;
Node*


};


Traversal of Single linked list





*/

#include<iostream>
using namespace std;

class Node {
public:

int val;
Node* next;

Node (int data ){
    val=data;
    next=NULL;
}

};


void insertAtHead(Node* &head, int val){

    Node* new_node= new Node (val);
    new_node->next=head;                             // insert a nord at starting 
    head=new_node;

}
 void insertAtTail(Node* &head ,int val){                       // insert a node at last 
        Node* new_node=new Node(val);
        Node* temp= head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        // temp has reached last node 
        temp->next=new_node;
 }          
  
 void insertAtPosition(Node* &head, int val, int pos){     // insert at arbitrary position
if (pos==0){ // if weve to insert at 0 position
    insertAtHead(head, val);
    return ;
}
Node* new_node=new Node(val);
Node* temp=head;
int current_pos=0;
while (current_pos!=pos-1){
    temp=temp->next;
    current_pos++;
}

// temp is pointing to node at pos-1
new_node->next=temp->next;
temp->next=new_node;

 }

void updateAtPosition(Node* head ,int k, int val){              // insert a node in between 
    Node* temp=head;
    int curr_pos=0;
    
    while (curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }

    // temp will be pointing to the kth node 
    temp->val=val;
}

void deleteAtHead (Node* &head){                           // delete a node at head 
    Node* temp=head;  // node to be deleted 
    head=head->next;
    free(temp);
}

void deleteAtTail(Node* &head){                           // delete at last
    Node* second_last=head;
    while (second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    // now second last point to second last 
    Node* temp= second_last->next;   // node to be deleted 
    second_last->next=NULL;
    free(temp);
}

void deleteAtPosition (Node *head, int pos){
    if (pos==0){
        deleteAtHead(head);
        return ;
    }
    int curr_pos=0;
    Node* prev= head;
    while (curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node* temp=prev->next;   // this is node to be deleted 
    prev->next=prev->next->next;
    free(temp);
}
void display (Node* head){
    Node* temp=head;                            
    while (temp!=NULL){    
        cout<<temp->val<<"->";                         // traversal of single linked list
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

int main (){
    Node* n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;


    Node* head= NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,4,1);
    display(head);
    updateAtPosition(head,2,5);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);    //O(n)
    display(head);
    deleteAtPosition(head,1);  // O(n) in worst case
    display(head);

    return 0;
}