#include<stdio.h>
int main(){
     long int num,count,fact=1;
    printf("Enter a Number:- ");
    scanf("%ld",&num);
    for(count=1;count<=num;count++)
    {
        fact=fact*count;

    }
        printf("Factoeial of %ld is %ld ",num,fact);
    return 0;
}