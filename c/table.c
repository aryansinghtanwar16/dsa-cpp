#include<stdio.h>
int main(){

    int n;
    printf("Enter no of table :");
    scanf("%d", &n);

    for (int i=1; i<=10; i++){
       int table=i*n;
        printf("%d\n",table);
        
    }
    printf("%d\n");



    return 0;
}