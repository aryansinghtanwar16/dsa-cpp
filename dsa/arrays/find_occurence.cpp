// Your task: Take n integers into a vector<int>, then take a target number from the user. Write a function that counts how many times the target appears in the vector.

// Example input
// Enter size: 6
// Enter elements: 2 4 2 7 2 9
// Enter target: 2


// Expected output
// Target occurs 3 times

#include<iostream>
#include<vector>
using namespace std ;

int findOccurence(vector<int> &arr ){

    int target;
    cout<<"Enter target:";
    cin>>target;
    int count=0;;
    for(int i=0; i<arr.size(); i++){
       if(arr[i]==target){
       count++;
       }
    }
    return count;

}

int main(){

    int n;
    cout<<"Enter n:";
    cin>>n;

    vector<int> arr(n);

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=findOccurence(arr);
    cout<<"No of occurence is:"<<result<<endl;

    return 0;
}