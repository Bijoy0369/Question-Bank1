#include<stdio.h>
int main(){
    int year;
    printf("Enter A year:- ");
    scanf("%d",&year);
    if(((year%4==0) && (year%100!=0)) || (year%400==0))

    {
        printf("%d is leep year",year);
    }
    else{
        printf("%d Not a leep year",year);
    }
    return 0;
}