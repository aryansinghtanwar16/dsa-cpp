#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;
int main(){

  vector<int> v={26,28,72,12,56,54,25};
    sort(v.begin(), v.end());
    int low=0;
    int high=v.size()-1;
    
int target=56;
    while(low<=high){
        int mid=low+(high-low/2);

        if (v[mid]==target){
            cout<<mid<<" ";
            break;

        }
        else if (target<v[high]){
            high=mid-1;
        }
        else{
            low=mid+1;

     }
     
    }



return 0;
}