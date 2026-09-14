// Given the head of a sorted link list , delete all the duplicates such that each element appears only once 
// Return the linked list sorted as well

/*
ex -1->2->2->3->3->3 list is sorted 
*/

#include<iostream>
using namespace std ;

class Node{
public:

int val;
Node* next;
Node(int data){
    val=data;
    next=NULL;
}

};

    class linkedList{
        public:
Node* head;
linkedList(){
    head=NULL;

}
void insertAtTail(int value){
    Node* new_node= new Node(value);
    if (head==NULL){
        // list is empty 
        head=new_node;
        return ;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

    void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}


    };



    void deleteDuplicateNodes(Node* head){
        Node* curr_node=head;
        while(curr_node!=NULL){
            while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
                //delete curr node
                Node* temp=curr_node->next;   // node to be deleted 
                // forward curr node
                curr_node->next=curr_node->next->next;
                free(temp);
            }
            // loop ends when curr node and next node values are diff 
            curr_node=curr_node->next;
        }
    }


int main(){

   linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(2);

    ll.display();

    deleteDuplicateNodes(ll.head);
    ll.display();



    return 0;
}