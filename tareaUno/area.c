#include <stdio.h>

struct coordenadas {
    int x, y;
};


struct area {
    struct coordenadas puntoA;
    struct coordenadas puntoB;
};


int main(){
    struct area a; //no se puede poner el nombre de area de nuevo porque se confunde el programa
    int ancho, alto, areaFinal;

    //SOlicitud de coordenadas
    printf("Introduce la coordenada x de la esquina superior izquierda\n");
    scanf("%d", &a.puntoA.x); //& dir de memoria de la variable
    printf("Introduce la coordenada y de la esquina superior izquierda\n");
    scanf("%d", &a.puntoA.y);
    printf("Introduce la coordenada x de la esquina inferior derecha\n");
    scanf("%d", &a.puntoB.x);
    printf("Introduce la coordenada y de la esquina inferior derecha\n");
    scanf("%d", &a.puntoB.y);

    ancho = a.puntoB.x - a.puntoA.x;
    printf("El ancho es: %d", ancho);
    alto = a.puntoA.y - a.puntoB.y; //la y del punto B siempre < puntoA.y
    printf(" y el alto es: %d\n", alto);

    areaFinal = ancho * alto;
    printf("El area del rectangulo es: %d\n", areaFinal);

    return 0;
}