#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if (a<=100 && a!=0){
        printf("In Range\n");
    }
    else {
        printf("Out of Range\n");
    }
}