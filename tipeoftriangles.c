#include<stdio.h>
#include<math.h>
int main ()
{
    float a, b, c, temp;
    scanf("%f %f %f", &a, &b, &c);
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(c >= (b + a)){
        printf("NAO FORMA TRIANGULO\n");
    }
    if(pow(c, 2.0)==pow(b, 2.0)+pow(a, 2.0)){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(c, 2.0)>pow(b, 2.0)+pow(a, 2.0) && c!=(b+a)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((pow(c, 2.0))<(pow(b, 2.0)) + (pow(a, 2.0))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && a == c && c == b){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(c == b && a != b || b == a && c != b){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
