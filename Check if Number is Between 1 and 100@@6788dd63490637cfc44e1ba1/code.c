#include<stdio.h>
void main(){
    int a;
    scamf("%d",&a);
    if (a == 1 && a<100){
        printf("In Range\n");
    }
    else {
        printf("Out of range\n");
    }
}