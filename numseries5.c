#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
float sum;
int count;

printf("enter total no of terms");
scanf("%d",&n);
sum=0.0f;
count=1;
for(i=1;i<=n;i++)
{
sum=sum+((float)(pow(count,2))/(float)(pow(count,3)));
count+=2;
//printf("%d\n",sum);

}
printf("sum of series is : %f\n",sum);
return 0;	
}
