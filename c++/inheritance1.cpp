#include<iostream>
using namespace std ;

class Parent1{
    public:
    Parent1(){
cout<<"Parent1class"<<endl;
    }
};


class Parent2{
    public:
    Parent2(){
cout<<"Parent2class"<<endl;
    }
};

class Child: public Parent1, public Parent2 {
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

class Grandchild: public Child {
    public:
    Grandchild(){
        cout<<"Grandchild class "<<endl;

    }
};


int main(){

    Child c; 

    return 0;
}