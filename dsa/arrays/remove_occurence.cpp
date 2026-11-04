// Your task: Given a vector and a target number, create a new vector containing all elements except the target.
// Example 1
// Input:
// Size: 6
// Elements: 3 2 3 4 3 5
// Target: 3


// Expected output:
// 2 4 5


#include<iostream>
#include<vector>
using namespace std;

vector<int> removeTarget(const vector<int>& arr, int target){

    vector<int> result;

 for (int i=0; i<arr.size(); i++){
    if(arr[i]==target){
        continue;
    }
    result.push_back(arr[i]);

 }
return result ;
}

int main(){
int n;
cout<<"Enter no of ele:";
cin>>n;

vector<int> arr(n);

for (int i=0; i<n; i++){
    cin>>arr[i];
}

int target;
cout<<"Enter target:";
cin>>target;

vector<int> result = removeTarget(arr, target);

for(int i=0; i<result.size(); i++){
    cout<<result[i]<<" ";
}

return 0;
}