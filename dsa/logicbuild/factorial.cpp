// factorial !n

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Write number ";
    cin>>n;

    long long result =1;

    for (int i=1; i<=n; i++){
        result=result*i;
    }
    cout<<"factorial of "<<n<<" "<<"is"<<" "<<result<<endl;

    return 0;
}