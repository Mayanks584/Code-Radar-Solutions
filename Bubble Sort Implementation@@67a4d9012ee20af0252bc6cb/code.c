#include<stdio.h>
void bubblesort(int arc[],int n){
    for(int i=0;i<n-1;i++){
        for(int j =0 ;j<n-i-1;j++){
            if(arc[j]==arc[j+1]){
                int temp = arc[j];
                arc [j]=arc[j+1];
                arc[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arc[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arc[i]);
    }
    bubblesort(arc,n);
    for(int i =o;i<n;i++){
        printf("%d",arc[i]);
    }
    return 0;
}