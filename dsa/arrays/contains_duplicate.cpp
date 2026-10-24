// Your task: Given a vector of integers, return true if any value appears at least twice. Return false if every value is distinct.

// Example 1

// Input:
// nums = [1, 2, 3, 1]


// Output:
// true

#include<iostream>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int>& nums){
for(int i=0; i<nums.size(); i++){
for (int j=i+1; j<nums.size(); j++){
    if (nums[i]==nums[j]){
        return true;
    }
}
}
return false;
}

int main(){

    int n;
    cout<<"No of ele:";
    cin>>n;
    
    vector<int> nums(n);

    for (int i=0; i<n; i++){
        cin>>nums[i];
    }

    int res=containsDuplicate(nums);
    cout<<res<<endl;


    return 0;
}