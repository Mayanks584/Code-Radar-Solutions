#include<stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > 0 || b < 0 ){
        printf("True\n");
    }
    else if ( a >= 0 || b >= 0 ){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}