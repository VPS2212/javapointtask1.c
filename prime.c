#include<stdio.h>
int main()
{
	int n,i,m=0,flag=0;
	printf("Enther the number to chek Prime:");
	scanf("%d",&n);//get input form user
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)//check the given number is divid by any number between 2 to n number if divided this is not prime number
		{
			printf("Number is not prime\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Number is Prime\n");
	return 0;
	}

