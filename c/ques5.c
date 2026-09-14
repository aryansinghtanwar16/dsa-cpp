/*
Write a program to check if a student passed or failed 

marks>30 is pass
marks<=30 is fail
*/

#include<stdio.h>
int main(){

    // int marks ;
    // printf("Enter marks:");
    // scanf("%d",&marks);

    // if (marks<=30){
    //     printf("Failed\n");
    // }
    // else {
    //     printf("Passed\n");
    // }

    char ch;
    printf("Enter character :");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z'){
        printf("upper case\n");
    }else if (ch>='a' && ch<='z'){
        printf("lower case\n");
    }else {
        printf("not a letter \n");
    }


    return 0;
}