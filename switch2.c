#include<stdio.h>
main()
{
	int num1,num2,option;
	printf("Enter the numbers: \n ");
	scanf("%d%d",&num1,&num2);
	printf("Enter your option:\n ");
	scanf("%d",&option);
	switch(option)
	{
		case 1: {
			printf("Addition is %d :\n",num1+num2);
			break;
		}
		case 2: {
			printf("Substraction is %d:\n",num1-num2);
			break;
		}
		case 3:{
			printf("Multi is %d:\n",num1*num2);	
			break;
		}
		case 4:{
			printf("Div is %d:\n",num1/num2);
			break;
		}
		case 5: {
			if(num1>num2){
				printf("num1 is greater");
			}
			else
			    printf("num 2 is greater");
			break;
	    }
	    default:
	    	printf("enter right option");
	    }
	}
