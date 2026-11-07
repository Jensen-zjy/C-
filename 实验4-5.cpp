#include <stdio.h>
int main() 
{
    int num;
    int count = 0;        
    long long sum = 0;    
    double average;

    while (scanf("%d", &num) == 1)
	 {

        if (num % 11 == 0)
		 {
            break;
        }

        if (num > 0 && num % 3 == 0) 
		{
            sum += num;
            count++;
        }
    }

    if (count > 0) 
	{
        average = (double)sum / count;

        printf("能被3整除的正整数之和：%lld\n", sum);
        printf("它们的平均值：%.2f\n", average);
    } 
	else 
	{
        printf("没有符合条件的正整数\n");
    }

    return 0;
}
