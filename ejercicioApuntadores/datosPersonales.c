#include <stdio.h>

int verificaEdad(int anio, int *edad); //declaracion de la funcion

int main(){
    char nombre[20];
    char sexo[20];
    int edad, dia, mes, anio, resultado;

    printf("Introduce tu nombre: ");
    gets(nombre);
    fflush(stdin);
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    printf("Introduce tu sexo: ");
    scanf("%s", &sexo);
    printf("Introduce tu fecha de nacimiento: (dd mm aaaa)");
    scanf("%d %d %d", &dia, &mes, &anio);

    printf("Tus datos son\n");
    printf("Nombre: %s \n", nombre);
    printf("Edad: %d \n", edad);
    printf("Sexo: %s \n", sexo);
    printf("Fecha de nacimiento: %d%d%d \n", dia, mes, anio);

    resultado = verificaEdad(anio, &edad);

    if(resultado==1){
        printf("Tu edad real es %d , acorde a tu fecha de nacimiento", edad);
        printf("Tu edad se ha actualizaco");
    }
}

int verificaEdad(int anio, int *edad) { //definicion de la funcion
    int anioAct=2026;
    if (anioAct-anio == *edad){
        return 0; //f
    } else {
        *edad == anioAct - anio;
        return 1;  //true
    }
    
}