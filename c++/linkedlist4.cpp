/*
Given the head of a singly linked list, reverse the list and return the reversed list 

*/

#include<iostream>
using namespace std;
class Node{
public:

int val;
Node* next;
Node(int data){
    val=data;
    next=NULL;
}


};

class Linkedlist{
    public:

    Node* head;
    Linkedlist(){
        head=NULL;
    }

    void insertAtTail(int val){
        Node* new_node= new Node(val);
        if (head==NULL){
            head=new_node;
            return ;
        }

        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
           
        }
        temp->next=new_node;
        
     }

     void display(){

    Node* temp=head;
    while (temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
     }
};


Node* reverseLL(Node*&head){
    Node* prevpointer=NULL;    // NULL-1-2-3-4-5  (null is the prev)  
    Node* currentpointer=head; ;   // current pointer is at head rn will move 
   
    // currentpointer->next=prevpointer;   
    //move all pointer 
    while (currentpointer!=NULL){
        Node* nextpointer=currentpointer->next;
        currentpointer->next=prevpointer;
        prevpointer=currentpointer;
        currentpointer=nextpointer;
    }

    Node* new_head=prevpointer;
    return new_head;
}


// through recursion 
// 1-2-3-4-5
//1-(2-3-4-5)
Node* reverseLLRecursion(Node* &head){

    // base case
    if(head==NULL|| head->next==NULL) return head;
    Node* new_head= reverseLLRecursion(head->next);
    head->next->next=head;
    head->next=NULL; //head is now pointing to last node 
    return new_head;  

}
int main(){

      Linkedlist ll;
 ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

  
   
    // ll.head=reverseLL(ll.head);
    // ll.display();
    ll.head=reverseLLRecursion(ll.head);
    ll.display();

    return 0;
}