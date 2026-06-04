//TASK 1 BASIC CALCULATOR PROGRAM

#include<stdio.h>
int main()
{
	float num1, num2, result; //three variables
	int choice;
	
	printf("===== SIMPLE CALCULATOR=====\n");  //4 opreations
	printf("1.Addition \n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter your choice (1-4): ");
	scanf("%d",&choice);
	
	printf("\nEnter first number : ");
	scanf("%f",&num1);
	
	printf("\nEnter second number : ");
	scanf("%f",&num2);
	
	switch(choice)
	{
		case 1:
			result = num1 + num2;
			printf("Result = %.2f\n",result);
			break;
		
		case 2:
			result = num1 - num2;
			printf("Result = %.2f\n",result);
			break;
			
		case 3:
			result = num1 * num2;
			printf("Result = %.2f\n",result);
			break;
		
		case 4:
			if(num2==0)
			{
				printf("Error: Division by zero is not allowed\n");
			}
		
			else
			{
				result = num1/num2;
				printf("Result = %.2f\n",result);
			}
			break;
			
		default:
			printf("Invalid choice!\n");				
	}
	return 0;
		
}
