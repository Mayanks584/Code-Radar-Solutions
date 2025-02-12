#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral\n");
    }
    else if (a == b && a != c){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene\n");
    }
}