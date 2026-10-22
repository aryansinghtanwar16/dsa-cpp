// Reverse Without Another Vector
// Medium

// Your task: Reverse the original vector without creating a second vector.

// Example 1

// Input:
// Size: 5
// Elements: 1 2 3 4 5


// Expected output:
// 5 4 3 2 1

#include<iostream>
#include<vector>
using namespace std;
void reverseVector(vector<int> &arr){
    
    for(int i=0,j=arr.size()-1; i<j; i++, j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
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

    reverseVector(arr);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}