/*
Write a program to calculate area of a circle (side is given)
pie(r)^2  
*/

#include<stdio.h>
int main(){

    float radius;
    float pie=3.14;
    printf("enter raius: ");
    scanf("%f", &radius);
    
printf("area of circle is :%f\n ", pie*radius*radius);


    return 0;
}