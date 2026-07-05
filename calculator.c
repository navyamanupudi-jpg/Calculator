//To run actual calculator 
#include<stdio.h>
#include<math.h>
int main()
{
	printf("\nCALCULATOR MENU\n");
	printf("Addition: +\n");
	printf("Subtraction: -\n");
	printf("Multiplication: *\n");
	printf("Division: /\n");
	printf("Power: ^\n");
	printf("Modulus: %%\n");
	printf("Square: s\n");
	float a;
	char operation;
	float b;
	float c;
	char ch;
	do
	{
		printf("\nEnter expression\n");
		scanf("%f",&a);
		scanf(" %c",&operation);
		scanf("%f",&b);
		switch(operation)
		{
			case '+':
				c=a+b;
				printf("%f",c);
				break;
			case '-':
				c=a-b;
				printf("%f",c);
				break;
			case '*':
				c=a*b;
				printf("%f",c);
				break;
			case '/':
				if(b==0)
				{
					printf("Error!Division by Zero is not allowed");
				}
				else
				{
					c=a/b;
					printf("%f",c);
				}
				break;
			case '^':
				c=pow(a,b);
				printf("%f",c);
				break;
			case '%':
    			if((int)b == 0)
    			{
    			    printf("Error!Modulus by zero is not allowed.");
    			}
    			else
    			{
    			    printf("%d", (int)a % (int)b);
    			}
    			break;
			case 's':
				b = a;
				c=a*b;
				printf("%f",c);
				break;
			default:
				printf("Error!Such operation is not allowed.");
				break;
		}
		printf("\nDo you want to continue? (Y/N) :");
		scanf(" %c", &ch);
	}
	while(ch=='Y' || ch=='y');
	printf("\nThank you for using Calculator!");
	return 0;
}
