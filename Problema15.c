/*Fernando Covarrubias Romero
Problemas con arreglos
Positivos, negativos o nulos en un arreglo */

#include <stdio.h>

int main() 
  {
    int n, p = 0, neg = 0, nulos = 0;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
      {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        if (arr[i] > 0) 
        {
            p = p + 1;
        } 
          else 
        {
          if (arr[i] < 0) 
        {
            neg = neg + 1;
        } 
          else 
        {
            nulos = nulos + 1;
        }
        }
      }
    printf("\nResultados en el arreglo:\n");
    printf("Positivos: %d\n", p);
    printf("Negativos: %d\n", neg);
    printf("Nulos: %d\n", nulos);
    
    return 0;
  }
  }
