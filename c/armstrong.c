#include<stdio.h>
#include<math.h>
int main(){
    // check whether a number is armstrong number or not 
  
int number, originalNumber,remainder,result=0,n=0;
printf("Write number:");
scanf("%d",&number);

originalNumber=number;

// count the no of digits 
while(originalNumber!=0){
    originalNumber/=10;
    n++;
}

// reset original number back to input 
originalNumber=number;

// extract digits 
while(originalNumber!=0){
    remainder=originalNumber%10;    // get the last digit
    result+=round(pow(remainder,n));
    originalNumber/=10;    
}

if (result==number){
    printf("%d is an armstrong number\n", number );

}
else {
    printf("%d is not an armstrong number\n",number);
}

    return 0;
}