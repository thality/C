/******************************************************************************
Thalita Rosa
*******************************************************************************/

#include <stdio.h>

    
    struct coordenadas                                        
    {
        int u;
        int y;
    };
    
    typedef struct coordenadas coordenadas;
    
    
    coordenadas lecoordenadas(){
        coordenadas aux;
        scanf("%i", &aux.u);
        scanf("%i", &aux.y);
        return aux; 
    };
    
    void imprimeCoordenada(coordenadas coord) {
        printf("(%.1i, %.1i)\n", coord.u, coord.y);
    }

    
    coordenadas soma(coordenadas a, coordenadas b){
        coordenadas aux1;
        aux1.u =  a.u + a.y;
        aux1.y =  b.u + b.y;
        return aux1;
    }
    
int main(){
    coordenadas imprimir, somar;
    coordenadas c1, c2;
    c1 = lecoordenadas();
    c2 = lecoordenadas();
    somar = soma(c1, c2);
    imprimeCoordenada(somar);

    return 0;
}
