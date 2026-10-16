//Take n integers into a vector and calculate their average
#include<iostream>
#include<vector>
using namespace std ;
int main(){

    int n;
    cout<<"Enter no of elements:";
    cin>>n;

    vector<int> arr(n);
    long long sum=0;
    
    cout<<"enter elements :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        sum+=arr[i];
    }
    double average=sum*1.0/n;
    cout<<"Average is :"<<average<<endl;

    return 0;
}