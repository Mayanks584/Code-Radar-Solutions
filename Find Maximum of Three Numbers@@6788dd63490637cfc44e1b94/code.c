#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&c){
        printf(" /n",a);
    }
    else if(b>a&&c){
        printf("\n",b);
    }
    else{
        printf("\n",c);
    }
}