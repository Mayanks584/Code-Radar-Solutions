#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int sum = n*i;
        printf("%d*%d=%d\n",n,i,sum);
    }
}