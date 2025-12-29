#include<stdio.h>

int main()
{
    int array[100];
    int n, i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    for(i = 1; i < n; i++) {
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }
    printf("\nMaximum value in the array is: %d", max);
    printf("\nMinimum value in the array is: %d\n", min);
    return 0;
}

