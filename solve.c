#include <stdio.h>

int main()
{
    double A,B,C,R1,R2,R3,R4,R5;
    scanf("%lf%lf%lf",&A,&B,&C);
    R1=(A*C)/2;
    R2=3.14159*(C*C);
    R3=.5*(A+B)*C;
    R4=B*B;
    R5=A*B;
    printf("TRIANGULO: %.3lf\n",R1);
    printf("CIRCULO: %.3lf\n",R2);
    printf("TRAPEZIO: %.3lf\n",R3);
    printf("QUADRADO: %.3lf\n",R4);
    printf("RETANGULO: %.3lf\n",R5);
    return 0;
}