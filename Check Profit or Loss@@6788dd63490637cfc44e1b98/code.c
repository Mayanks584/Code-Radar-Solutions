#include<stdio.h>
void main(){
    int sp,cp,profit;
    scanf("%d%d%d",&sp,&cp,&profit);
    if (sp>cp){
        profit = sp - cp;
        printf("Profit\n",profit);
    }
    else if(cp>sp){
        profit = cp - sp;
        printf("Loss\n");
    }
    else{
        printf("no loss\n");
    }
}