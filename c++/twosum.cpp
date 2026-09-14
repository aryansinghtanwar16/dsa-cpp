#include<iostream>
using namespace std ;
int main (){

   
   
    
    int arr[]={2,3,4,5,6};
    int n=5;
    int target;
    cin>>target;

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]+arr[j]==target){
           cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}


    return 0;

}