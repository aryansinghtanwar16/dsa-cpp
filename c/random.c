#include<stdio.h>
int main(){
int a=10;

if(a!=5 || a==5){
    printf("YES\n");
}
     else {
        printf("NO\n");
     }   
    
     printf("%d\n",5>3 && 5<10);

     printf ("%d",!5>3 && 5<10);

    return 0;
}