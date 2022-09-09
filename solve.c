#include<stdio.h>
int main ()

{
    char name;
    double s,e,sum;
    scanf("%s %lf %lf", &name, &s, &e);
    sum= s+e*.15;
    printf("TOTAL = R$ %.2lf\n", sum);
    return 0;
}
