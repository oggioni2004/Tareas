#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i,j,verificar;
    verificar=0;
    j=0;
    scanf("%d",&n);
    int valoresJump[n];
    int diferenciaValores[n];
    for (i=0; i < n; i++){
        scanf("%d", &valoresJump[i]);    
    }
    for (i = 1; i < n; i++){
        diferenciaValores[j]=fabs(valoresJump[i-1]-valoresJump[i]);
        j++;
    }
    for (i=0, j=1; j < n; i++, j++){
        if (diferenciaValores[i] > diferenciaValores[j]){
            verificar++;     
        }
    }   
    if (verificar == n-2){
        printf("Jolly");
    }
    else{
        printf("Not jolly");
    }
    return 0;
}