#include <stdio.h>
#include <string.h>

struct donador {
    char nombre[15];
    char apellido[20];
    float cantidad;
};

// void imprimeDonador(struct donador); //declaracion de la funcion
void imprimeDonador (struct donador persona); //paso por valor

void modificaDatosDonador(struct donador *persona); //paso por referencia

int main(){
    struct donador Luis;
    printf("Introduce nombre y apellido: ");
    scanf("%s %s", &Luis.nombre, &Luis.apellido);
    printf("Introduce la cantidad a donar: ");
    scanf("%f", &Luis.cantidad);


    imprimeDonador(Luis); //paso por valor

    modificaDatosDonador(&Luis);

    imprimeDonador(Luis); //paso por valor
}

void imprimeDonador(struct donador persona){
    printf("El donador %s %s aporta %.2f pesos \n", persona.nombre, persona.apellido, persona.cantidad); 
}

/*
void imprimeDonador(struct donador *persona){
    printf("El donador %s %s aporta %.2f pesos \n", persona->nombre, persona->apellido, persona->cantidad);
    //punto si es estructura
    //flechita si es que me pasaron un apuntador a una estructura
} */

void modificaDatosDonador (struct donador *persona){
    strcpy(persona->nombre,"Juanito");
    strcpy(persona->apellido,"Perez");
    persona->cantidad=12000;
}