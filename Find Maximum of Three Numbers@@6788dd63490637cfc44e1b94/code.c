#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&c){
        printf("a\n");
    }
    else if(b>a&&c){
        printf("b\n");
    }
    else{
        printf("c\n");
    }
}