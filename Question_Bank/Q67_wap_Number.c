// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);

//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     c = a;
//     a = b;
//     b = c;

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }
// Without 3rd variable swapping

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number:-");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}