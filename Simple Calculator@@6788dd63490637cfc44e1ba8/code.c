#include<stdio.h>
void main(){
    int a,b;
    char op;
    scanf("%d%d"&a,&b);
    printf("(+,-,*,/): ");
    scanf("%c",&op);
    if(op == '+'){
        res=a+b;
        printf("%d",res);
        }
         else {
        printf("Invalid operator or incomplete logic.\n");
    }

}