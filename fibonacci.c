#include<stdio.h>
int main()
{
	int i1=0,i2=1,i3,k,j;
	printf("Enther the Number:");
	scanf("%d",&i3);
	for(k=0;k<10;k++)
	{
		i3=i1+i2;
		for(j=k;j<10;j++)
		printf("%d\t",i3);
		i1=i2;
		i2=i3;
		printf("\n");
	}
	printf("\n");
	return 0;
}
