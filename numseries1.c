#include<stdio.h>
void main()
{
int n,sum=0,i;
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

printf("%d+",i);


sum=sum+i;
}
printf("=%d",sum);	
}
