// Your task: Write a function that returns true if the vector is sorted in non-decreasing order and false otherwise.

// Non-decreasing means each element is less than or equal to the next element. Equal values are allowed.

// Example 1

// Input:
// Size: 5
// Elements: 1 2 2 5 8


// Output:
// Sorted: true

#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &arr){

    for (int i=0; i+1<arr.size(); i++){
        if(arr[i]>arr[i+1]){
            return false;
           
        }
    }
return true;
}
int main(){

    int n;
    cout<<"Enter no of elements:";
    cin>>n;

    vector<int> arr(n);

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

  int res=  isSorted(arr);
  cout<<boolalpha<<res<<endl;


    return 0;
}