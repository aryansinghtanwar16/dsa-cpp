#include<stdio.h>
int main(){
int num;
printf("enter num:");
scanf("%d", &num);

if (num<=0){
    printf("%d this is not a natural number \n",num);
}else{
    printf("%d this is natural number \n", num);
}


    return 0;
}