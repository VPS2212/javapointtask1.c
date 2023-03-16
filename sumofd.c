#include<stdio.h>
int main()
{
	int a,i,sum=0;
	printf("Enther The Number to add:");
	scanf("%d",&a);
for(i=0;i<=a;i++)
	{
	a=a%10;
		printf("i =%d\n",i);
		sum=sum+i;
		printf("Sum=%d\n",sum);
	}
printf("Sum of Entered Number value is: Sum=%d\n",sum);
return 0;
}

