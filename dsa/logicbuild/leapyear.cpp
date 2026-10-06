// basic logic building 
//check whether a yeae is leap year or not 

#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter year:";
cin>>year;

if (year%4==0 && year%100!=0 || year%400==0){
    cout<<"This year is a leap year";
} else  {
    cout<<"not a leap year";
}

    return 0;
}