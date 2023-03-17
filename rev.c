#include<stdio.h>
int main()
{
	int a,b,i,rev=0;
	printf("Enther the number:");
	scanf("%d",&a);
	while(a!=0) 
	{
		b=a%10;
		printf("b=%d\n",b);
		rev=rev*10+b;
		printf("Each loop value of rev=%d\n",rev);
		a=a/10;
		printf("A Value=%d\n",a);
	}
	printf("rev=%d\n",rev);
	return 0;
}
