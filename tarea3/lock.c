#include <stdio.h>
#include <stdlib.h>

int main(){
    int puntoPartida, nCombinacion[3],i,grados,detener;
    detener=1;
    while (detener != 0){
        scanf("%d",&puntoPartida);
        for (i = 0; i < 3; i++){
            scanf("%d",&nCombinacion[i]);
        }
        if (nCombinacion[0]-puntoPartida == 30){
            grados=(1080)+(270);
            printf("%d\n",grados);
        }
        else if (nCombinacion[0]-puntoPartida == 20){
            grados=(1080)+(540);
            printf("%d\n",grados);
        }
        else if (nCombinacion[0]-puntoPartida == 10){
            grados=(1080)+(810);
            printf("%d\n",grados);
        }
        else if (nCombinacion[0]-nCombinacion[1]-nCombinacion[2]-nCombinacion[3] == 0){
            detener=0;
        }
    }
    return 0;
}