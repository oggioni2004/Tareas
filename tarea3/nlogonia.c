#include <stdio.h>
#include <stdlib.h>

int main(){
    int casosPruebaCasas, xPuntoDivision, yPuntoDivision,i,forCasas;
    scanf("%d",&casosPruebaCasas);
    while (casosPruebaCasas != 0){
        forCasas=casosPruebaCasas;
        int xCasas[casosPruebaCasas];
        int yCasas[casosPruebaCasas];
        scanf("%d",&xPuntoDivision);
        scanf("%d",&yPuntoDivision);
        for (i = 0; i < forCasas; i++){
            scanf("%d",&xCasas[i]);
            scanf("%d",&yCasas[i]);
        }
        for (i = 0; i < casosPruebaCasas; i++){
            if (xCasas[i] == xPuntoDivision || yCasas[i] == yPuntoDivision){
                printf("divisa\n");
            }
            else if (xCasas[i] > xPuntoDivision && yCasas[i] > yPuntoDivision){
                printf("NE\n");
            }
            else if (xCasas[i] < xPuntoDivision && yCasas[i] < yPuntoDivision){
                printf("SO\n");
            }
            else if (xCasas[i] > xPuntoDivision && yCasas[i] < yPuntoDivision){
                printf("SE\n");
            }
            else if (xCasas[i] < xPuntoDivision && yCasas[i] > yPuntoDivision){
                printf("NO\n");
            }
        }
        scanf("%d",&casosPruebaCasas);
    }
    return 0;
}