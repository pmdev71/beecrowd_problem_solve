# include<stdio.h>
int main()
{
    double x,result;
    scanf("%lf",&x);
    result=(4*3.14159*(x*x*x))/3;
    printf("VOLUME = %.3lf\n",result);
    return 0;
}