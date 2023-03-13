#include<stdio.h>
int main()
{
	int a=0,b=1,c,d,i;//fibonacci series formula fn=fn-1+fn-2; 
	printf("enter the Number\n");
	scanf("%d",&d);//Get Input form user
	printf("%d\n%d\n",a,b);//Normaly Fibonacci series starts form 0 &1 //
	for(i=2;i<d;i++) //for loop -make loop number of time as per given input d// 
	{
		c=a+b;//add the variable 
		printf("%d\n",c);//and store in c
		a=b;// assign the a value to b
		 printf("the value of b :%d\t",b);// this line used to show how the b value change
		b=c;//assign the b value to c- every loop the ab and c value incresed
		   printf("the value of c:%d\t",c); 

	}
	return 0;
}
		
