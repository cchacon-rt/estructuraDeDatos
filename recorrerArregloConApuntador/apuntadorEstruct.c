//apuntador a una estructura

#include <stdio.h>

struct cuenta {
    int num;
    float saldo;
    char propietario[10];
};

struct cuenta banco[3] = {123, 1561.5, "Mario", 456, 123, "Pedro", 789, 1000, "Ana"};

int main(){
    struct cuenta *p_Cuenta;  //p de pointer, creamos el apuntador
    p_Cuenta = banco;  //apunta al primer elemento del array

    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("\nCuenta: %d \nSaldo: %.2f \nPropietario: %s\n", p_Cuenta->num, p_Cuenta->saldo, p_Cuenta->propietario);
        p_Cuenta++;
    }
    

}

