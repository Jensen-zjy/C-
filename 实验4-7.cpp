#include <stdio.h>
int main()
{
    int score;
    int count = 0;     
    int sum = 0;       
    int max = -1;      
    double average = 0.0;

    while (scanf("%d", &score) == 1 && score != -1) 
	{

        if (score >= 60) {
            count++;
            sum += score;

            if (score > max) {
                max = score;
            }
        }
    }

    if (count > 0) 
	{
        average = (double)sum / count;

        printf("及格人数%d\n", count);
        printf("平均分%.2f\n", average);
        printf("最高分%d\n", max);
    } else 
	{
        printf("没有及格的学生\n");
    }
    return 0;
}
