#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,n,i,contador,sinParadas;
    contador=1;
    sinParadas=0;
    scanf("%d",&t);
    while (t != 0){
        scanf("%d",&n);
        int cantidadGasolinera[n];
        int cantidadRecorrido[n];
        for (i=0; i < n; i++){
            scanf("%d", &cantidadGasolinera[i]); 
        }
        for (i=0; i < n; i++){
            scanf("%d", &cantidadRecorrido[i]); 
        }
        for (i=0; i < n; i++){
            if (cantidadGasolinera[i] > cantidadRecorrido[i]){
                printf("Case %d: Possible from station %d\n",contador,i+1);
            }
            else{
                sinParadas++;
            }  
        }
        if (sinParadas == n){
            printf("Case %d: Not possible\n",contador);
        }
        contador++;
        t--;
    }
    return 0;
}