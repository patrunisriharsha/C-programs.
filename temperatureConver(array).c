#include<stdio.h>
int main()
{
	float temps[100],results[100];
	int n,i,choice;
	printf("enter number of elements in array");
	scanf("%d",&n);
	printf("enter elememts in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&temps[i]);
	}
    printf("1 Celsius to Fahrenheit\n");
    printf("2 Fahrenheit to Celsius\n");
    printf("3 Celsius to Kelvin\n");
    printf("4 Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    for(i = 0; i < n; i++) {
        switch(choice) {
            case 1:
                results[i] = (temps[i] * 9/5) + 32; 
                break;
            case 2:
                results[i] = (temps[i] - 32) * 5/9; 
                break;
            case 3:
                results[i] = temps[i] + 273.15;      
                break;
            case 4:
                results[i] = temps[i] - 273.15;  
                break;
            default:
                printf("Invalid choice\n");
                return 0;
        }
    }

    printf("\nConverted Temperature Values:\n");
    for(i = 0; i < n; i++) {
        printf("%.2f ", results[i]);
    }

    printf("\n");
    return 0;
}
	

