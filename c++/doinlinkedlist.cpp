#include<iostream>
using namespace std ;

class Node{
public:

    int val;
    Node * next;
    Node (int data){
        val=data;
        next=NULL;
    }
};

    void insertAtHead(Node* &head, int val){
        Node* new_node= new Node(val);
        new_node->next=head;
        head=new_node;

    }

    void insertAtTail(Node* head, int val){
        Node* new_node= new Node(val);
        Node*temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    // deleting the first node 
    void deleteFirstNode(Node* &head ){
        if(head==NULL) return;
        // create temp
        Node* temp=head;
        head=head->next;
        delete temp;

    }

    void insertAtPosition (Node* & head, int val, int pos){
        if (pos==0){
            insertAtHead(head , val);
            return ;
         }
         Node* new_node= new Node(val);
         Node* temp=head;
         int current_pos=0;
         while(current_pos!=pos-1){
            temp=temp->next;
            current_pos++;
      }

      new_node->next=temp->next;
      temp->next=new_node;
    }

    // display 

    void display (Node* head){
        Node*temp=head;
        while (temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }




int main(){

    Node*n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;

    Node*head=NULL;

    insertAtHead(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);

    insertAtTail(head,6);
    display(head);
    insertAtTail(head,7);
    display(head);

    insertAtTail(head,8);
    display(head);
    insertAtTail(head,9);
    display(head);
deleteFirstNode(head);
display(head);
    return 0;
}