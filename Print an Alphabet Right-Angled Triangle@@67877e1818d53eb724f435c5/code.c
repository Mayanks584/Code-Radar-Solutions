#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int a = j + 64;
            int d = (char)a;
            printf("%c ",d);
        }
        printf("\n");
    }
}