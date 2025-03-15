#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        for(int j =i;i>0;j++){
            a = j + 64;
            int d  = (char)a;
            printf("%c",d);
        }
        printf("\n");
    }
}