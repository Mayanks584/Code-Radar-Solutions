#include<stdio.h>
void main(){
    int a,f;
    scanf("%d",&a);
    f = a&1;
    if (f==1){
        printf("Set\n");
    }
    else {
        printf("Not Set\n");
    }
}