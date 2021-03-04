#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,x1,x2,x0,delta,pierwiastek;
    printf("Podaj wspolczynniki funkcji kwadratowej (a,b,c)\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta=(b*b)-4*(a*c);
    if (delta>0){
        pierwiastek=sqrt(delta);
        x1=(-b+pierwiastek)/2*a;
        x2=(-b-pierwiastek)/2*a;
        printf("wyniki to %lf i %lf", x1, x2);
    }
        if (delta==0){
            x0=-b/2*a;
            printf("wynik to %lf", x0);
        }
            if (delta<0){
                printf("delta ujemna - rownanie nie ma rozwiazania");
            }
    return 0;
}
