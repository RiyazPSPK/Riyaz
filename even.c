#include<stdio.h>
main()
{
	int num1;
	printf("enter the number");
	scanf("%d",&num1);
	if(num1%2==0)
	{
		printf("%d is even \n",num1);
	}
	else if(num1%2!=0)
	{
		printf("%d is odd \n",num1);
	}
	else
	{
		printf("other number \n");
	}
}
