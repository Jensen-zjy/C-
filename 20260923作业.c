#include <stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b,c);
	printf("max=%d\n",d); 
	return 0;
 } 
 
int max(int x,int y,int z)
{
	int m;
	if(x>y&&x>z)
	m=x;
	if(y>x&&y>z)
	m=y;
	if(z>x&&z>y)
	m=z;
	return(m);
}
 
