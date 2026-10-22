// Find the First and Last Occurrence
// Your task: Given a vector and a target number, find the first index and the last index where the target appears.
// Example 1
// Input:
// Size: 6
// Elements: 4 2 7 2 9 2
// Target: 2
//result: 1 4

#include<iostream>
#include<vector>
using namespace std;

void findOccurence(vector<int> &arr, int target ,int & first ,int &last){

    first=-1; 
    last=-1;
    for (int i=0; i<arr.size(); i++){
    if (first==-1){
        first=i;
    }
    last =i;
    }
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for (int i=0; i<n; i++){
    cin>>arr[i];
}

int target;
cout<<"Enter target:";
cin>>target;

int first, last;
findOccurence(arr,target,first,last);
cout<<"First index:"<<first<<endl;
cout<<"Last index:"<<last<<endl;
    return 0;
}