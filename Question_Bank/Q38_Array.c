#include<stdio.h>
int main(){
    int a[9]={10,9,15,12,6,5,14,23,11};

    for(int i=0;i<9;i++){
         printf("%d ",a[i]);

    }
    printf("\n");
   
    for(int i=8;i>=0;i--){
         printf("%d ",a[i]);
    }
    return 0;
}