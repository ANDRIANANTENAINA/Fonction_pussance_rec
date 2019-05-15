#include <stdio.h>
#include <stdlib.h>

int puissance(int x, int n);

int main()
{
    double i; int x,n;

    printf("\n Puissance de la forme x ^ n \n");
    printf("Entre le valeur de x: ");scanf("%d",&x);
    printf("Entre le valeur de n: ");scanf("%d",&n);

    i=puissance(x,n);
    printf("\n\tResutat de %d ^ %d = %f \n\n",x,n,i);
    return 0;
}

int puissance(int x, int n){
    if(n == 0) return 1;
    return (puissance(x,(n-1)) * x);
}
