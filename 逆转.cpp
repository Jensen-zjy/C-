#include <stdio.h>

int main()
{
	
    int num, a, b, c, reverse_num;
    // 读取输入的三位正整数
    scanf("%d", &num);
    // 拆分出百位、十位、个位
    a = num / 100;       // 百位
    b = num / 10 % 10;   // 十位
    c = num % 10;        // 个位
    // 重新组合成逆序数字，自动去掉前导零
    reverse_num = c * 100 + b * 10 + a;
    // 直接以整数形式输出，整数本身就不会保留前导零
    printf("%d\n", reverse_num);
	return 0;
}
