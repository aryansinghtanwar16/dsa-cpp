//Take n integers into a vector and count how many elements are even
#include<iostream>
#include<vector>
using namespace std ;


int countEven(vector<int> &arr){

    int count=0;
for (int i=0; i<arr.size(); i++){
    if (arr[i]%2==0) {
        count++;
    }
}
return count;
    
}


int main(){
int n;
cout<<"no os ele:";
cin>>n;

if (n<=0){
    cout<<"must be positive";
}

vector<int> arr(n);
for (int i=0; i<n; i++){
    cin>>arr[i];
}

int result =countEven(arr);
cout<<"count of even no is:"<<result<<endl;

    return 0;
}