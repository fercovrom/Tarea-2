/*Fernando Covarrubias Romero
Problemas con arreglos
Frecuencia de un número dentro del arreglo */

#include <stdio.h>

int main() 
  {
    int n, num, cont = 0;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Ingrese el numero entero a buscar: ");
    scanf("%d", &num);
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            cont++;
        }
    }
    
    printf("El numero %d se encuentra %d veces en el arreglo.\n", num, cont);
    
    return 0;
  }
