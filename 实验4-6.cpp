#include <stdio.h>
#include <math.h>

double f(double x)
{
    return 3.0 * (x - 1.0) * (x - 1.0) - 2.4;
}

double g(double x)
{
    return 6.0 * x - 6.0;
}

int main()
{
    double x = 0.0;          
    double a = 0.01;       
    const double eps = 1e-5; 
    double grad;
    int k = 0;            

    grad = g(x);

    printf("迭代次数是\tx\t\t|g(x)|\t\tf(x)\n");

    while (fabs(grad) > eps) 
	{
        x = x - a * grad;  
        k++;
        grad = g(x);

        printf("%d\t\t%.6f\t%.6f\t%.6f\n",
               k, x, fabs(grad), f(x));
    }

    printf("达到极值时 x = %.6f\n", x);

    return 0;
}
