#include <stdio.h>

int main()
{
   int A,B,C,maior,max;
    scanf("%d%d%d",&A,&B,&C);
    maior=((A+B+ abs(A-B))/2);
    max=((maior+C+ abs(maior-C))/2);
    
    printf("%d eh o maior\n",max);
    
    return 0;
}