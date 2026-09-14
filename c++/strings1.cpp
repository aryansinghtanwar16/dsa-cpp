#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){

    string str;
    //cin>>str   // this will print one word only 
    // getline(cin,str);
    // cout<<str<<endl;

    // ascii values 

    char ch='a';
    cout<<int(ch)<<endl;

string san="hellobrother";
reverse (san.begin(),san.end());

cout<<san<<endl;
cout<<san.substr(0,4)<<endl;

string s1="aryan singh";
string s2=" tanwar";
cout<<s1+s2<<endl;

// strcat()
char s3[20]="college";
char s4[20]="wallah";
strcat(s3,s4);
cout<<s3<<endl;  // college wallah 


string s5="abcd";
char ar='e';
s5.push_back(ar);
cout<<s5<<endl;

string s6="abcdef";
cout<<s6.size()<<endl;

char cd[20]="abcdef";
cout<<strlen(cd)<<endl;


int num=567;
string s7=to_string(num);
s7+="1";
cout<<s7<<endl;
cout<<s7[1]<<endl;



    return 0;
}
/*
Indexing of charatcters in a string 
same as arrays 
at n index= null character 
C O L L E G E
0 1 2 3 4 5 6 NULL
str[3]= L



ASCII values 
character has a numeric value 
a-z, A-Z , *, +, -
a-z
A= 65
B= 66
a= 97
b=98


STRING VS CHAR ARRAY
 - string is a class
 - string variables or objects of this class

 char array of char data type 


 Inbuild function of strings 

 1- reverse()
 reverse a string from starting ptr to end ptr
 reverse(pt1, ptr2 )
 string str= "abcd"
 reverse(str.begin(), str.end())

 2- substr()
 to find substring of a given string 
 str.substr(0,3)

 3- The "+" operator
 "college"+"wallah"
 "college wallah"

 S1+=S2
 S1=S1+S2( this is creating extra space )


 4- strcat()

 5- size()
 str.size()
 str.length


 char ch[20];
 strlen(ch);- O(n)


 to_string()
 numeric value to string 

*/