#include<stdio.h>
int main ()

{
    int e_number,w_hour;
    float a_hour,salary;
    scanf("%d%d%f",&e_number,&w_hour,&a_hour);
    salary=w_hour*a_hour;
    printf("NUMBER = %d\n",e_number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;

}

