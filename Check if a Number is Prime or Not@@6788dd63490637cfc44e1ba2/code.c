#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i =2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
        if(n==0){
            printf("invalid\n");
        }
        else if(a==0){
            prinf("Prime");
        }
        else{
            printf("Not Prime")
        }
    }
}