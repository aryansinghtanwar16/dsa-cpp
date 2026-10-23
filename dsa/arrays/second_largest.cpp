// Second Largest
// Medium

// Your task: Take n integers into a vector and find the second-largest distinct value.
// Example 1
// Input:
// Size: 5
// Elements: 8 4 8 6 3


// Output:
// Second largest: 6

#include<iostream>
#include<vector>
using namespace std ;

bool secondLargest(vector<int> &arr, int &second_largest){
    int largest=arr[0];
    

    if (arr.size()<2){
return false;
    }
bool hasSecond=false;
for (int i=0; i<arr.size(); i++){
    if (arr[i]>largest){
        second_largest=largest;
        largest=arr[i];
        hasSecond=true;
    }

    else if(arr[i]<largest){
        if (!hasSecond){
            second_largest=arr[i];
            hasSecond =true;
        }
        else if(arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
}
  return hasSecond;

}


int main(){

    int n;
    cout<<"No of ele:";
    cin>>n;
    
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int second_largest;
    bool found= secondLargest(arr, second_largest);

    if (found){
        cout<<"Second largest:"<<second_largest<<endl;
    }else{
        cout<<"NO second largest value found"<<endl;
    }
    
    return 0;
}