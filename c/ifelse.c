#include<stdio.h>
int main(){
int age ;
printf("Enter age :");
scanf("%d", &age);

if (age>18){
    printf("you are adult ass \n");

}
else if(age==18) {
printf("nga just become adult \n ");
}

else{
    printf("Son youre doomed just get older \n");
}


// TERNARY OPERATOR 

age>=18 ? printf("adult\n") : printf("not adult\n");




    return 0;

}