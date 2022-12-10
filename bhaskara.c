#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, x1, x2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b * b)-4 *a *c;
    x1=(-b + sqrt(delta))/(2*a);
    x2=(-b - sqrt(delta))/(2*a);
    if(delta < 0 || a == 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf", x2);
    }
    return 0;
}
