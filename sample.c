#include<stdio.h>

double multiply(double x, double y);//declaration
int main()
{
    double x,y,product; //deifining variables
    printf("Give any two numbers: \n");
    scanf("%lf %lf", &x,&y);
    product = x*y;
    printf("product = %lf", product);
    return 0;
}
