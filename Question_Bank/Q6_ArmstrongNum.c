#include<stdio.h>
int main(){
    int n,b,r,s=0;
    printf("Enter Any Number:- ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        r=n%10;
        s=(r*r*r)+s;
        n=n/10;

    }
    if (b==s)
    {
         printf("Armstrong Number");
    }
    else
    {
         printf(" Not Armstrong Number");
    }
   
    return 0;
}
