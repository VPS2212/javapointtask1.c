#include<stdio.h>
int main()
{
	int a,r,sum=0,n,t;
	printf("Enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		sum=sum*10+r;
		a/=10;
		//printf("sum=%d\n",sum);
	}
	n=sum;
	while(n>0)
	{
		t=n%10;
		switch(t)
		{
		case 1:
		printf("one\n");
	break;
		case 2:
		printf("two\n");
	break;
		case 3:
		printf("three\n");
	break;
		case 4:
		printf("Four\n");
	break;
		case 5:
		printf("Five\n");
	break;
		case 6:
		printf("Six\n");
	break;
		case 7:
		printf("Seven\n");
	break;
		case 8:
		printf("Eight\n");
	break;
		case 9:
		printf("Nine\n");
	break;
		case 0:
		printf("Zero\n");
	break;
		default:
	printf("Error\n");
	break;
		}
	n=n/10;
	}
	
	return 0;

}
