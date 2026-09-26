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

//scanf函数要加&
//变量必须先写类型声明（int m）才能用 
//如果有两个数相等，三个if都不执行，m没有赋值，会随机乱值
//优化；int m=x，先默认x最大。if（y>m） m=y；if（z>m) m=z;return m; 
