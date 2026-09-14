#include<iostream>
using namespace std ;

class Node {
public:
    int val;
    Node* next;
    Node (int data){
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


};
int main (){


    return 0;
}