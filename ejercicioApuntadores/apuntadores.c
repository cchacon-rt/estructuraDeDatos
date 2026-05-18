#include <stdio.h>

int main (){
    int x=7;
    int *apuntadorA_x=0; //creamos un apuntador
    apuntadorA_x=&x; //le asignamos una direccion de memoria al apuntador

    printf("El valor de x es: %d \n",x);
    printf("La direccion de memoria de x es: %d \n", &x);

    printf("Direccion de memoria que almacena el apuntador: %d \n", apuntadorA_x);
    printf("Valor al que apunta el apuntador es: %d \n", *apuntadorA_x);

    *apuntadorA_x=13;

    printf("El valor de x es: %d \n",x);
}