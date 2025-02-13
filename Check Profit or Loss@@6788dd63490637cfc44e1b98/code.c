#include<stdio.h>
void main(){
    int sp,cp,profit,loss;
    scanf("%d%d%d%d",&sp,&cp,&profit,&loss);
     profit = sp - cp;
      loss = cp - sp;
    if (profit>0){
        printf("Profit\n",profit);
    }
    else if(loss<0){
       printf("Loss\n",loss);
    }
    else{
        printf("No Profit No Loss\n");
    }
}