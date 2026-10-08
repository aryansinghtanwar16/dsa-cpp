#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"write a number:";
    cin>>num;

    int original=num;
    int reversed=0;

    while (num>0){
        int digit=num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }
    cout<<reversed<<endl;
if (original==reversed){
    cout<<"the number is a palindrome";
}else{
    cout<<"the number is not a palindrome";
}

    return 0;
}