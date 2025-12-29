#include<stdio.h>

int fact(int);
int greater(int, int);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Factorial of %d is %d\n", a, fact(a));
    printf("Factorial of %d is %d\n", b, fact(b));
    printf("Greater number among %d and %d is %d\n", a, b, greater(a, b));

    return 0;
}

int fact(int a)
{
    int k = 1, i;
    for(i = 1; i <= a; i++)
    {
        k = k * i;
    }
    return k;
}

int greater(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}

