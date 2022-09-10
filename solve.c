# include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float z1,z2,result;
    scanf("%d %d %f",&x1,&y1,&z1);
    scanf("%d %d %f",&x2,&y2,&z2);
    result=(z1*y1)+(z2*y2);
    printf("VALOR A PAGAR: R$ %.2f\n",result);
    return 0;
}