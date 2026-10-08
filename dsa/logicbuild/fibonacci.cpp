#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"write num:";
    cin>>num;

    int a=0;
    int b=1;
    for (int i=1; i<=num; i++){
        cout<<a<<" ";   // print current term
        int next=a+b;    
        a=b;
        b=next;
    }

    return 0;
}