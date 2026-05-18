#include <stdio.h>
#include <stdlib.h> //para malloc

struct contacto
{
    char nombre[20];
    char telefono[10];
    char correoE[20];
    int edad;
} miContacto;

typedef struct contacto persona;

int main(){
    printf("\nPara almacenar un entero se requieren: %d bytes", sizeof(int));
    printf("\nPara almacenar un flotante se requieren: %d bytes", sizeof(float));
    printf("\nPara almacenar un double se requieren: %d bytes", sizeof(double));
    printf("\nPara almacenar un char se requieren: %d bytes", sizeof(char));
    printf("\nPara almacenar un short int se requieren: %d bytes", sizeof(short int));
    printf("\nPara almacenar un long int se requieren: %d bytes", sizeof(long int));

    printf("\nPara almacenar una instancia de tipo contacto se requieren: %d bytes", sizeof(struct contacto));
    printf("\nPara almacenar una instancia de tipo contacto se requieren: %d bytes\n", sizeof(persona));
    printf("\nNombre: %d", sizeof(miContacto.nombre));
    printf("\nTelefono: %d", sizeof(miContacto.telefono));
    printf("\nCorreo Electronico: %d", sizeof(miContacto.correoE));
    printf("\nEdad: %d", sizeof(miContacto.edad));


    //reservar memoria dinamica
    persona *p_persona;
    p_persona = (persona *) malloc (sizeof(persona));

    p_persona->edad=15;
    printf("\n\nLa edad es: %d\n", p_persona->edad);
}