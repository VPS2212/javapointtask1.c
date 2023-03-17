#include<stdio.h>
int main()
{
	int a,b;
	printf("Enther the vaue a=");
		scanf("%d",&a);
	printf("enter the value b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("a=%d\n b=%d\n",a,b);
	return 0;
}
