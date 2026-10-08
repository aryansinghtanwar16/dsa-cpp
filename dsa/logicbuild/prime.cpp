#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Write num:";
    cin>>num;

    if (num<=1){
        cout<<"the number is not a prime number "<<endl;
    }
    bool isPrime=true;

    for (int i=2; i*i<=num; i++){
        if ((num%i==0)){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"the number is a prime number"<<endl;
    }else{
        cout<<"the number is not a prime number"<<endl;
    }
   
    return 0;
}