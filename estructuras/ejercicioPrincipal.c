#include <stdio.h>

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct persona{
    char nombre[20];
    int edad;
    struct fecha fecha_nacimiento;
};

int main(){
    struct persona persona1;
    printf("Nombre: ");
    scanf("%s", persona1.nombre);
    printf("Edad: ");
    scanf("%d", &persona1.edad); //aca antes iba gets
    printf("Fecha de nacimiento dd/mm/aaaa");
    printf("\nDia: ");
    scanf("%d", &persona1.fecha_nacimiento.dia);
    printf("Mes: ");
    scanf("%d", &persona1.fecha_nacimiento.mes);
    printf("Anio: ");
    scanf("%d", &persona1.fecha_nacimiento.anio);

    printf("\n\nImprimiendo datos...");
    printf("Nombre: %s", persona1.nombre);
    printf("\nEdad: %d", persona1.edad);
    printf("\nFecha nacimiento: %d%d%d", persona1.fecha_nacimiento.dia, persona1.fecha_nacimiento.mes, persona1.fecha_nacimiento.anio);

}