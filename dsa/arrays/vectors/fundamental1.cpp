// Print all elements

#include<iostream>
using namespace std ;
int main(){
int n;
cout<<"enter the size of arr:";
cin>>n;

    int arr[n];
    cout<<"enter no of elements";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}