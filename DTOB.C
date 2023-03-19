#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the decimal Number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%2;
		a/=2;
		printf("%d\t",b);
	}
	return 0;
}

