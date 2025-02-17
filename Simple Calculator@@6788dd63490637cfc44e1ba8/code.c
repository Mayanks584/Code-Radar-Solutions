#include<stdio.h>
void main(){
    int a,b,res;
    char op;
    scanf("%d%d%d",&a,&b,&res);
    printf("%d: ");
    scanf("%c",&op);
    if(op == '+'){
        res=a+b;
        printf("%d\n",res);
        }
         else {
        printf("Invalid operator or incomplete logic.\n");
    }

}