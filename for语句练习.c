#include <stdio.h>
int main()
{
//	int num=0;
//	scanf("%d",&num); 
//	while (num) 
//	{
//	printf("%d",num%10);
//	num=num/10;
//	}
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d ", i);
//	}
//	int i=0;
//	int sum=0;
//	for (i=1;i<=100;i++)
//	{
//		if(i%3==0)
//		sum += i;
//	} 
//	 printf("%d\n",sum);
	int i=0;
	int sum=0;
	for (i=3;i<=100;i+=3)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
