#include <stdio.h>

int main() 
{
    int a , b;
    
    printf("enter a");
    scanf("%d",&a);
    b = ++a;
    printf("Pre-Increment: a = %d, b = %d\n", a, b);
    a = 5;
    b = a++;
    printf("Post-Increment: a = %d, b = %d\n", a, b);
    a = 5;
    b = --a;
    printf("Pre-Decrement: a = %d, b = %d\n", a, b);
    a = 5;
    b = a--;
    printf("Post-Decrement: a = %d, b = %d\n", a, b);

    return 0;
}

