#include<stdio.h>
void main(){
    int sp,cp;
    scanf("%d%d%d%d",&sp,&cp);
    if (sp>cp){
        printf("Loss");
    }
    else{
        printf("Profit\n");
    }
}