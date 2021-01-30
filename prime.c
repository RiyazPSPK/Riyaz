#include<stdio.h>
main()
{
	int num1,i,count = 0;
	printf("enter the number");
	scanf("%d",&num1);
	for(i = 1 ; i <= num1 ; i++ ){
        if( num1 % i == 0 ) {
            printf("%d\n",i); 
			count ++;
        }
    }
    if(count == 2) {
        printf("number %d is prime",num1);
    } else {
        printf("number %d is not a prime",num1);
    }
}
