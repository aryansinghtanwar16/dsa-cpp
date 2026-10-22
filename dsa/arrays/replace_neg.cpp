// Take n integers into a vector<int>. Write a function that replaces every negative element with 0.

// Example 1

// Input:
// Size: 5
// Elements: 4 -3 7 -1 0


// Expected output:
// 4 0 7 0 0

#include<iostream>
#include<vector>

using namespace std;

 void replaceNeg(vector<int> &arr){
        for (int i=0; i<arr.size(); i++){
            if(arr[i]<0){
                arr[i]=0;
            }
        }
    }
int main(){

   

    int n;
    cout<<"No of ele:";
    cin>>n;
    
    vector<int> arr(n);

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

   replaceNeg(arr);
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }cout<<endl;

    return 0;
}