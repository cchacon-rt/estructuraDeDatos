#include <stdio.h>

void ordena(int *a, int *b, int *c);

int main(){
    int a, b, c;
    printf("Dar el valor de a,b y c: ");
    scanf("%d %d %d, &a, &b, &c");

    printf("Los valores son: %d, %d, %d" a, b, c);
    ordena(&a, &b, &c);
    printf("\nLos valores ordenados son: %d, %d, %d", a.b.c);
}

void ordena(int *a, int *b, int *c){
    printf("\nLos valores dentro de la funcion son %d, %d, %d", *a, *b, *c);

    int aux=0;

    if (*a<*b && *a<*c){ //a es el menor
        if(*b<*c){
            printf("\nEstan en orden");
        } else {
            aux=*b;
            *b=*c;
            *c=aux;
        }
    } else if (*b<*a && *b<*c){ //b es el menor
        if(*a<*c){
            aux=*a;
            *a=*b;
            *b=aux;
            *c=aux;
        } else if  (*c<*a && *c<*b) { //c es el menor
            if (*a<*b) {  //b es el mayor
                aux=*a;
                *a=*c;
                *c=*b;
                *b=aux;
            } else {

            }
            
        }
    }
    
}