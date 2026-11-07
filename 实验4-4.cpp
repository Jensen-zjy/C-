#include <stdio.h>
int main()
{
    int num, digit, count = 0;

    scanf("%d", &num);

    printf("ÄæĞò£º");

    while (num > 0) {
        digit = num % 10;    
        printf("%d", digit); 
        num = num / 10;   
        count++;            
    }

    printf("\n");
    printf("%dÎ»Êı\n", count);

    return 0;
}
