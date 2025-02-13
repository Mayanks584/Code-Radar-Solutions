#include<stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a & b %3 ==0 ){
        printf("Divisible by Both\n");
    }
    else if(a & b % 5 ==0){
        printf("Divisible by Both\n");
    }
    else{
        printf("Divisible by 3\n");
    }
}