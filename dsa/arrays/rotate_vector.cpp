// Left Rotation
// Medium

// Your task: Take n integers into a vector and write a function that rotates the vector left by one position.

// The first element moves to the end, and every other element moves one position to the left.

// Example 1

// Input:
// Size: 5
// Elements: 1 2 3 4 5


// Expected output:
// 2 3 4 5 1

#include<iostream>
#include<vector>
using namespace std;

void rotateLeft(vector<int>& arr){

    if (arr.size()<2){
        return ;
    }
    int temp=arr[0];
    for (int i=0; i<arr.size(); i++){
arr[i]=arr[i+1];
    }
   arr[arr.size()-1]=temp;
}

using namespace std;
int main(){


    int n;
    cout<<"Enter no of ele:";
    cin>>n;

    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    rotateLeft(arr);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    


    return 0;
}