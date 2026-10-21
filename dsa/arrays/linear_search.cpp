// Write a function that returns the index of the first occurrence of a target. If the target doesn't exist, return -1.

// Example:
// Array: 10 20 30 40 30
// Target: 30
// Output: 2


#include<iostream>
#include<vector>
using namespace std ;

int linearSearch(vector<int> &arr, int target){
    for(int i=0; i<arr.size(); i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
int n;
cout<<"No of ele:";
cin>>n;

vector<int> arr(n);
for (int i=0 ; i<n; i++){
    cin>>arr[i];
}

if (n<0){
    cout<<"Invalid input";
}
int target;
cout<<"Enter target:";
cin>>target;

int result = linearSearch(arr, target);
cout<<"Index:"<<result<<endl;

    return 0;
}