#include <stdio.h>

struct contacto
{
    char nombre[15];
    char apellidoP[20];
    char telefono[10];
};

int main(){
    struct contacto agenda[3];

    int i;
    for(i=0;i<3;i++){
        fflush(stdin);
        printf("\nIntroduce el nombre: ");
        fgets(agenda[i].nombre, 15, stdin);
        fflush(stdin);
        printf("\nIntroduce el apellido: ");
        fgets(agenda[i].apellidoP, 20, stdin);
        
        fflush(stdin);
        printf("\nIntroduce tu telefono: ");
        scanf("%s", &agenda[i].telefono);
    }
    printf("\n\nImprimiendo Agenda\n");

    for ( i = 0; i < 3; i++)
    {
        printf("NOMBRE: %s %s", agenda[i].nombre, agenda[i].apellidoP);
        printf("\t\t TELEFONO: %s \n", agenda[i].telefono);
    }
    
}
