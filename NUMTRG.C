#include<stdio.h>
int main()
{
    int a,i,j,k,l,temp=0;
    printf("Enter the Range:");
    scanf("%d",&a);
    temp=a;
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=a;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%d",k);
        for(l=i-1;l>=1;l--)
        printf("%d",l);
        a=temp;
        printf("\n");
    }
    return 0;
}
