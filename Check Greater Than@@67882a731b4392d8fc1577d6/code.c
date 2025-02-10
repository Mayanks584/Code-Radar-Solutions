#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("True\n");
    }
    else if(b>a){
        printf("False\n");
    }
    else{
        printf("both are equal\n" );
    }
    return 0;

    
}