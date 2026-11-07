#include <stdio.h>

int main()
{
    long term = 1;      
    long sum = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        term *= i;              
        if (i % 2 == 1)
            sum += term;       
        else
            sum -= term;       
    }

    printf("1!-2!+3!-...+9!-10! = %ld\n", sum);

    return 0;
}
