/*Fernando Covarrubias Romero
Problemas con arreglos
Almacenar los 100 primeros números pares en un arreglo */

#include <stdio.h>

int main() {
    int arr[100];
    int i;

    for (i = 0; i < 100; i++) 
    {
        arr[i] = (i + 1) * 2;
    }
    
    printf("Los numeros pares son:\n");

    for (i = 0; i < 100; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
