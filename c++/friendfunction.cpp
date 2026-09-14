#include<iostream>
using namespace std ;

class A{

    int x=10;

    friend void print (A &obj);          // we can accese private class through friend 
};

void print(A &obj){
    cout<<obj.x<<endl;
}
int main (){

    A obj;
    print(obj);          // not through cout itll give error 

    return 0;

}