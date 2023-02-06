#include<stdio.h>
#include<conio.h>
 
int main()
{
    int num,fact;
    int factorial(int);
     
    printf("\nenter the number: ");
    scanf("%d",&num);
     
    fact=factorial(num);
    printf("\nThe factorial of the number %d is %d",num,fact);
    getch();
}
int factorial(int number)
{
    if(number==0 || number==1)
	return 1;
    else
    return(number * factorial(number-1));
}
