#include<stdio.h>
void main(){
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if (sp>cp){
        printf("Loss");
    }
    else if(sp<cp) {
        printf("Profit\n");
    }
    else{
        printf("No Profit No loss\n");

    }

}