#include <stdio.h>
#include <stdlib.h>

int main(){
    int casosPrueba,nTiendas,posTienda[100],i,j,k,distanciaMin,cambio;
    scanf("%d",&casosPrueba);
    while (casosPrueba != 0){
        distanciaMin=0;
        scanf("%d",&nTiendas);
        for (i=0; i < nTiendas; i++){
            scanf("%d", &posTienda[i]); 
        }
        for (k=0; k < nTiendas; k++){
            for (i=0, j=1; j < nTiendas; i++, j++){
                if (posTienda[i] > posTienda[j]){
                    cambio=posTienda[j];
                    posTienda[j]=posTienda[i];
                    posTienda[i]=cambio;
                }
            }      
        }
        distanciaMin+=(posTienda[nTiendas-1]-posTienda[0])*2;
        printf("%d\n",distanciaMin);
        casosPrueba--;
    }
    return 0;
}