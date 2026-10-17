// Count Positive, Negative, and Zero Elements
#include<iostream>
#include<vector>
using namespace std;
void countNumbers(const vector<int>& arr, int& positive, int& negative , int& zero ){
positive=0;
negative=0;
zero=0;
for (int i=0; i<arr.size(); i++){

    if (arr[i]==0){
        zero++;
    }else if (arr[i]<0){
        negative++;
    }else if(arr[i]>0){
        positive++;
    }
}

}
int main(){

    int n;
    cout<<"Enter no of elements:";
    cin>>n;

    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int positive, negative,zero;
    countNumbers(arr, positive, negative, zero);

    cout<<"Postive:"<<positive<<endl;
    cout<<"Negative:"<<negative<<endl;
    cout<<"Zero:"<<zero<<endl;
    return 0;
}