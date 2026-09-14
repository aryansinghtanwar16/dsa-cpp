#include<stdio.h>
int main(){


    int day;
    printf("Day:");
    scanf("%d",&day);

    //switch 

    switch(day){
        case 1: printf("monday\n");
        break;
        case 2: printf("tuesday\n");
        break;
        case 3: printf("wednesday\n");
        break;
        case 4: printf("thursday\n");
        break;
        case 5: printf("friday\n");
        break;
        case 6: printf("satuarday\n");
        break;
        case 7: printf("sunday\n");
        break;

        default: printf("not a valid shit mf\n");
    }

    return 0;

}