// Take n integers into a vector<int>. Write a function that finds the largest element and smallest  and the index where they first appears
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

void findNum(vector<int> &arr, int& min, int& max, int& minIdx, int& maxIdx){
    if (arr.empty()) return ;

    min=arr[0];
    max=arr[0];

     minIdx=0;
    maxIdx=0;

    for (int i=0; i<arr.size(); i++){
        if (arr[i]>max){
            max=arr[i];
            maxIdx=i;
        }else if (arr[i]<min){
            min=arr[i];
            minIdx=i;
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

int min, max ,minIdx, maxIdx;
findNum(arr, min,max ,minIdx, maxIdx);
cout<<"Minimum"<<min<<endl;
cout<<"Present at index:"<<minIdx<<endl;
cout<<"Maximum"<<max<<endl;
cout<<"Present at index:"<<maxIdx<<endl;

    return 0;
}