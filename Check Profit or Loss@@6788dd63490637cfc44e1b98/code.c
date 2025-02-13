#include<stdio.h>
void main(){
    int sp,cp,profit,loss;
    scanf("%d%d%d%d",&sp,&cp,&profit,&loss);
    if (sp>cp){
        printf("Profit\n",profit);
    }
    else if(cp>sp){
        loss = cp - sp;
        printf("Loss\n",loss);
    }
    else{
        printf("No Profit No Loss\n");
    }
}