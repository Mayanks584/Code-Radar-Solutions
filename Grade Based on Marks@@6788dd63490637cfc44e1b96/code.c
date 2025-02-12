#include<stdio.h>
void main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a>=90){
        printf("A\n%d");
    }
    else if(b>=80 && b<90){
        printf("B\n%d");
    }
    else if(c>=70 && c<80){
        printf("C\n%d");
    }
    else if(d>=60 && c<70){
        printf("D%d\n");
    }
    else{
        printf("F\n");
    }
    
}