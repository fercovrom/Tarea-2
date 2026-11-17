/*Fernando Covarrubias Romero
Problemas con Estructuras Repetitivas (For, While)
Producto de los $N$ primeros números naturales */

#include <stdio.h>

int main() 
  {
    int n, i;
    long long produc = 1;
    
    printf("Ingrese un numero entero N: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Por favor ingrese un numero natural mayor a 0.\n");
    } 
    else 
      {
        for (int i = 1; i <= n; i++) 
        {
            produc = produc * i;
        }
        printf("El producto de los primeros %d numeros naturales es: %lld\n", n, produc);
      }
    
    return 0;
  }
