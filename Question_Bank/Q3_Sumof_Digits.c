#include<stdio.h>
int main(){
    int n,sum=0,r; //n any number,r remainder.
    printf("Enter Ant Number:- ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of Digits: %d",sum);

    return 0;
}