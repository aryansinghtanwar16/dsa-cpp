/*
Write a function that checks whether a number is a Strong Number.
A number is a Strong Number if the sum of the factorials of its digits equals the original number.
For example, 145 is a Strong Number because:
\[
1!+4!+5!=1+24+120=145
\]
*/

#include<iostream>
using namespace std;

int factorialDigit(int digit){
    int fact=1;
    for (int i=1; i<=digit; i++){
        fact*=i;
    }
    return fact;
}

bool isStrong(int n){
    if (n<0){
        return false;
    }
    int original=n;
    int sum=0;

    if (n==0){
sum=factorialDigit(0);
    }
while(n>0){
    int digit=n%10;
    sum+=factorialDigit(digit);
    n=n/10;
}
if (sum==original){
    return true;
}
return false;
}


int main(){


    int n;
    cout<<"Write no:";
    cin>>n;


    if(isStrong(n)){
        cout<<n<<"->"<<"is a strong no:"<<endl;
    }
    else{
        cout<<n<<"- >"<<"is not a strong no:"<<endl;
    }


    return 0;
}