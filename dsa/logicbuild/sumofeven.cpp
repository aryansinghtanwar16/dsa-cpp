// write a function and return sum of n even numbers 
#include<iostream>
using namespace std;
int sumOfEven(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i%2==0){
            sum+=i;
        }
    }

    return sum;
}

int main(){

    cout<<(sumOfEven(4))<<endl;

    return 0;
}