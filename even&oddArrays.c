#include<stdio.h>

int main()
{
    int arr[100];
    int even[100];
    int odd[100];
    int n, i;
    int eCount = 0;
    int oCount = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[eCount] = arr[i];
            eCount++;
        }
        else
        {
            odd[oCount] = arr[i];
            oCount++;
        }
    }
    printf("\nEven numbers are:\n");
    for(i = 0; i < eCount; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers are:\n");
    for(i = 0; i < oCount; i++)
    {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}

