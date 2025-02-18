#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for( int i=2;i<=a-1;i++){
        if (a % i == 0){
            printf("Not Prime\n");
            break;
        }
    }
    printf("Prime\n");
}