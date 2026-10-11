// Find the smallest and largest digit in a number 


#include<iostream>
using namespace std;

void digitRange(int n, int &smallest, int &largest){
     smallest=9;
    largest=0;

    if (n==0){
        smallest=0;
        largest=0;
    }

    for (int i=1; i<=n; i++){
        int digit=n%10;
        
        if(digit<smallest){
        smallest=digit;
        }if (digit>largest){
            largest=digit;
        }
 n= n/10;
    }
}

int main(){
int n;
cout<<"Enter Number:";
cin>>n;


int smallest, largest;
digitRange(n, smallest, largest);

cout<<"Smallest no:"<<smallest<<endl;
cout<<"Largest no:"<<largest<<endl;

}