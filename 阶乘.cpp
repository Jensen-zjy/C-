#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	unsigned long long fact=1;
	unsigned long long sum=0;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+fact;
	}
	printf("%llu\n",sum);
	return 0;
}
