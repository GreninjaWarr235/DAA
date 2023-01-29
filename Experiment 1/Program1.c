#include <stdio.h>
#include <math.h>

unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    printf("Input\tn\tn^3\t2^n\t(3/2)^n\tlgn\tlnn\tlg(lgn)\tln(lnn)\te^n\tn.2^n\tn!\n");
    for (int i = 0; i < 101; i++)
    {
        if (i < 21)
            printf("%d\t%d\t%.0lf\t%.0lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.0lf\t%llu\n", i, i, pow(i, 3), pow(2, i), pow(1.5, i), log2(i), log(i), log2(log2(i)), log(log(i)), exp(i), i * (pow(2, i)), factorial(i));
        else
            printf("%d\t%d\t%.0lf\t%.0lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.0lf\n", i, i, pow(i, 3), pow(2, i), pow(1.5, i), log2(i), log(i), log2(log2(i)), log(log(i)), exp(i), i * (pow(2, i)));
    }
}
