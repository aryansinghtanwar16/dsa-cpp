// sum of array elements

#include<iostream>
#include<vector>
using namespace std;
int main(){


    int n;
    cout<<"size of arr:";
    cin>>n;
    
    int sum=0;
    vector<int> arr(n);
cout<<"enter elements:";

    for (int i=0; i<n; i++){
        cin>>arr[i];

        sum+=arr[i];
    }
    cout<<"Sum is:"<<sum<<endl;

   


    return 0;
}