//Write a function that checks whether a positive number is divisible by the sum of its digits




#include<iostream>
using namespace std;
int sum=0;
bool isHarshad(int n){

    if(n<=0){
        return false;
    }
    int original=n;
int sumDigits=0;
while(n>0){
    int digit=n%10;
    sumDigits+=digit;
    n=n/10;
}

if (original%sumDigits!=0){
    return false;
}
return true;
}
int main(){

    int n;
    cout<<"WriteNO:";
    cin>>n;

if(isHarshad(n)){
    cout<<n<<"->"<< "is a harshard no."<<endl;
}else{
    cout<<n<<"->"<<"is not a harshad no."<<endl;
}

    return 0;
}