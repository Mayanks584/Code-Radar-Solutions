#include<stdio.h>
void main (){
    int a;
    scanf("%d",&a);
    if (a % 5 == 0 ){
        printf("Divisible\n");
    }
    else {
        printf("Not Divisible");
    }
}