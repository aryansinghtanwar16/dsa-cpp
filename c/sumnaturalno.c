#include<stdio.h>
int main(){

    int n;
    printf("Enter natural numbers:");
    scanf("%d",&n);
    int sum=0;

    for (int i=1; i<=n; i++){
        sum+=i;
        

    }

printf(" sum is: %d\n", sum);

    return 0;
}