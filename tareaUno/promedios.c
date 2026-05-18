#include <stdio.h>

struct alumno {
    char nombre[50], matricula[11], uea[50];
    float califs[4], promedio;
};

int main(){
    struct alumno arrayAlumnos[3];
    int i, j;

//almacenamiento de datos
    for ( i = 0; i < 3; i++)    {
        printf("\nNombre: ", i+1);
        scanf("%s", arrayAlumnos[i].nombre);
        printf("Matricula: ");
        scanf("%s", arrayAlumnos[i].matricula); //es string porque no vamos a alterar el num
        printf("UEA: ");
        scanf("%s", arrayAlumnos[i].uea);


        float sumaC = 0;
        for ( j = 0; j < 4; j++) //4 califs
        {
            printf("Calificacion %d: ", j+1);
            scanf("%f", &arrayAlumnos[i].califs[j]);
            sumaC += arrayAlumnos[i].califs[j];
        }
        arrayAlumnos[i].promedio = (sumaC / 4);
    }
    
//impresion igual con for

printf("\n---------------------\nRESULTADOS\n");
    for (i = 0; i < 3; i++)     {
        printf("\n\nNombre: %s\n", arrayAlumnos[i].nombre);
        printf("Matricula: %s\n", arrayAlumnos[i].matricula);
        printf("UEA: %s", arrayAlumnos[i].uea);

        //califs con otro for
        printf("\nCalificaciones\n");
        for (j = 0; j < 4; j++) 
        {
            printf("Calificacion %d: %.2f\n", j+1, arrayAlumnos[i].califs[j]);
        }
        printf("Promedio: %.2f\n", arrayAlumnos[i].promedio);
    }
    
return 0;
}
