#include<stdio.h>
unsigned long fact(int n)
{

int i;
unsigned long fact=1;

	for(i=n;i>=1;i--)
	fact=fact*i;
	return fact;
}
int main()
{
int n,i;
float sum=0;
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+((float)(i)/((float)fact(i)));
}
printf("%f",sum);
return 0;	
}
