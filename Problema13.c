/*Fernando Covarrubias Romero
Problemas con arreglos
Suma de los elementos de un arreglo unidimensional */

#include <stdio.h>

int main() 
  {
    int n, s = 0, i;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }
    
    printf("La suma de los elementos del arreglo es: %d\n", s);
    
    return 0;
  }
