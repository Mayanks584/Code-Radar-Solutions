#include<stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (b<a){
        printf("False\n");
    }
    else if(a<b){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}