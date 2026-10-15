// print arr in reverse order 

#include<iostream>
#include<vector>
using namespace std ;
int main(){

    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter elements";

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    //print in reverse 
    for (int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}