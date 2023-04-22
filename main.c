#include <stdio.h>
#include <stdlib.h>

//NOMBRE: Adriana Sofia Rozo Cepeda
//CODIGO: 202211498
//CORREO: as.rozo@uniandes.edu.co

// Función que invierte el orden de los bits de un entero de 32 bits
// Utilizo la variable res que se irá construyendo bit a bit a partir
// del número original "num". Para cada bit de "num", se insertará en
// la posición de menor peso de "res" mediante la operacion ver (1).
// Se retorna resp

int reversarInt(int num){
    int res = 0; 
    int i;
    for(i = 0; i < 32; i++){
        res = (res << 1) | (num & 1); //(1)
        num = num >> 1;
    }
    return res;
}

// Función que invierte el orden de los bits de cada elemento del vector
void invertirVector(int *vector, int n){
    int i;
    for(i = 0; i < n; i++){
        vector[i] = reversarInt(vector[i]);
    }
}

int main(){
    int n;
    int *vector;

    // Pedimos al usuario el tamaño del vector
    do{
        printf("Ingrese el tamaño del vector (n > 0): ");
        scanf("%d", &n);
    }while(n <= 0);

    // Inicializamos el vector
    vector = (int*) calloc(n, sizeof(int));
    int i;
    for(i = 0; i < n; i++){
        printf("Ingrese el valor del elemento %d: ", i+1);
        scanf("%d", &vector[i]);
    }

    // Invertimos el vector
    invertirVector(vector, n);

    // Imprimimos el vector en hexadecimal
    for(i = n-1; i >= 0; i--){
        printf("0x%X ", vector[i]);
    }

    // Liberamos la memoria asignada al vector
    free(vector);

    return 0;
}
