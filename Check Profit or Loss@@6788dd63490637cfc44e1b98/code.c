#include<stdio.h>
void main(){
    int sp,cp,profit,loss;
    scanf("%d%d%d%d",&sp,&cp,&profit,&loss);
    if (sp>cp){
        profit = sp - cp;
        printf("Profit\n",profit);
    }
    else if(cp>sp){
        loss = cp - sp;
        printf("Loss\n");
    }
    else{
        printf("no loss\n");
    }
}