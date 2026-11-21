#include <stdio.h>
//int main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i % 3==0&&i % 10 == 6)
//		{
//		printf(" %d",i);
//		}	
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int count;
//	count=0;
//	scanf("%d",&n);
//	while(n>0)
//	{
//		printf("%d",n%10);
//		n=n/10;
//		count++;
//	}
//	printf("\n");
//	printf("这是%d位数",count);
//	
//	return 0;
// } 
int main()
{
	int ch;
	int count_a = 0;
int count_i = 0;
int count_e = 0;
int count_o = 0;
int count_u = 0;
	ch = getchar();
	while(ch !='$')
	{
		if (ch == 'a' || ch == 'A') {
    count_a++;
}
else if (ch == 'i' || ch == 'I') {
    count_i++;
}
else if (ch == 'e' || ch == 'E') {
    count_e++;
}
else if (ch == 'o' || ch == 'O') {
    count_o++;
}
else if (ch == 'u' || ch == 'U') {
    count_u++;
}
		ch = getchar();
	}
printf("元音 a/A: %d 次\n", count_a);
printf("元音 i/I: %d 次\n", count_i);
printf("元音 e/E: %d 次\n", count_e);
printf("元音 o/O: %d 次\n", count_o);
printf("元音 u/U: %d 次\n", count_u);
	return 0;
 } 
