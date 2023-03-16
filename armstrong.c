#include<stdio.h>
int main()
{
	int a,i,temp,sum=0;
	printf("Enter the Number:");
	scanf("%d",&a);
	temp=a;
	while(a!=0) //for(i=1;i<=a;i++)
	{
printf("Value of a: %d\n", a);
i=a%10;
printf("i=%d\n",i);
sum=sum+(i*i*i);
a=a/10;
printf("Sum=%d\n",sum);
	}
	if(sum==temp)
	{
		printf("Entered Number is Armstrong Number\n");
	}
	else 
	{
		printf("Entered Number is not Armstrong Number\n");
	}
	return 0;
}

