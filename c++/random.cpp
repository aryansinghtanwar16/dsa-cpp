#include<iostream>
using namespace std;
int main (){

    int rows;
    cin>>rows;
    for (int i=1; i<=rows; i++){
        for (int space=1; space<=rows-i; space++){
            cout<<" ";
        }

        for (int col=1; col<=i; col++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}