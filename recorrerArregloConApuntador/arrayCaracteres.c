#include <stdio.h>

int main(){
    int numeros[10] = {1,2,3,4,5,6,7,8,9,0}; //inicializacion de un arreglo de valores enteros
    char nombre[20];

    int i;
    for (i=0;i<10;i++){     //es necesario el for porque son numeros
        printf("%d, ", numeros[i]);
    }

    printf("\nDame tu nombre: ");
    scanf("%s", nombre);

    printf("\n%s", nombre);

    printf("\nLa direccion de memoria del primer elemento del arreglo es: %d", &nombre[0]);
    printf("\nnombre = %d\n", nombre);
}