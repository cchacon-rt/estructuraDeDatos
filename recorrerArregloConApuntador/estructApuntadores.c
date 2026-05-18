//estructurasque almacenan apuntadores

#include <stdio.h>

struct datos {
    int *edad;
    float *promedio;
};

int main(){
    struct datos alumno1;
    int edad=25;
    float promedioF=8.5;

    //inicializar apuntadores
    alumno1.edad=&edad;
    alumno1.promedio=&promedioF;

    //acceder a la informacion a la que apunta el apuntador
    printf("La edad del alumno es: %d \n", *alumno1.edad);
    printf("Promedio: %.2f \n", *alumno1.promedio);
}
