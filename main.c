#include <stdio.h>
#include <stdlib.h>

double puissance(double x, double n);

int main()
{
    double i; int x,n;

    printf("\n Puissance de la forme x ^ n \n");
    printf("Entre x: ");scanf("%d",&x);
    printf("Entre n: ");scanf("%d",&n);

    i=puissance(x,n);
    printf("\n\tResutat de %d ^ %d = %f \n\n",x,n,i);
    return 0;
}

double puissance(double x, double n){
    if(n == 0) return 1;
    return (puissance(x,(n-1)) * x);
}
