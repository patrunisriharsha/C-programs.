#include <stdio.h> 
int StrongNumber(int num); 
int factorial(int n); 
int main()  

{ 
    int number; 
    printf("Enter a number: "); 
    scanf("%d", &number); 
     factorial(number); 
    if (StrongNumber(number)) { 
        printf("%d is a strong number.", number); 

    } else { 
        printf("%d is not a strong number.", number); 

    } 
} 

int factorial(int n)   
{ 
    int fact = 1,i; 
    if (n == 0 || n == 1) { 
        return 1; 
    } 

for (i=2;i<= n;i++)
	 { 
        fact =fact*i; 
    } 
    return fact; 
} 

 

 

int StrongNumber(int num)   

{ 

    int temp = num,sum = 0,rem; 

     

    if (num < 0)  

{ 

        return 0; 

    } 

 

    while (temp > 0) { 

        rem = temp % 10; 

        sum =sum + factorial(rem);  

        temp =temp / 10;  

    } 

     

    return (sum == num); } 
