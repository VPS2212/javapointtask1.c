#include<stdio.h>
int main()
{
	int n,r,sum=0,temp; 
	printf("Enter The number:");
	scanf("%d",&n);
	temp=n;//temp variable hold the n input value for check the sum variable value in end of the loop condition  
	while(n>0) //loop starts 
	{
	r=n%10; //10 is common number to get remider of any number 
	sum=sum*10+r;// this is formula for find palinfrome number . it add the reminder of n to sum. and store the value to sum.
        n=n/10;// the quotient is now n value . the quotient when 0 the loop will end 
	}
	n=temp;// if we are not store input of n value, the final qutoient value store as n value, then the result will be error. so store the n value in temp place//
	if(n==sum)//check the n value to sum if true below conditon will execute 
	{
		printf("The number is Palinfrome Number\n");
	}
	else //if not true else condition is print as output
	{
		printf("The Number is Not Palindrome\n");
	}
	return 0;
}
