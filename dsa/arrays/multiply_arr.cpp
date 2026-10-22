// Take a vector and an integer k. Write a function that multiplies every element of the original vector by k.

// Example 1

// Input:
// Size: 4
// Elements: 2 3 4 5
// k: 3


// Expected output:
// // 6 9 12 15

#include<iostream>
#include<vector>
using namespace std;

void multiplyArr(vector<int> &arr){
    int k;
    cout<<"multiplier?:";
    cin>>k;
    for (int i=0; i<arr.size(); i++){
        arr[i]=arr[i]*k;
        
        
    }

}


int main(){

    int n;
    cout<<"No of ele:";
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    

    multiplyArr(arr);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}