#include<stdio.h>
main()
{
	int num1,num2,res;
	printf("enter numbers");
	scanf("%d%d",&num1,&num2);
    add(num1,num2);
}
int add(a,b)
{
	int c;
	c=a+b;
    printf("sum is %d\n",c);
    mul(c);
}
int mul(addFunResPar)
{
    printf("result is %d\n",addFunResPar);	
}
