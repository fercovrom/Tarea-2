/*Fernando Covarrubias Romero
Problemas con Estructuras Repetitivas (For, While)
Tabla de multiplicar de un número entero */

#include <stdio.h>

int main() 
  {
    int n, i, res;
    printf("Ingrese un numero entero N: ");
    scanf("%d", &n);
    
    printf("Tabla de multiplicar del %d:\n", n);
    for (int i = 1; i <= 10; i++) 
    {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
    }
    
    return 0;
  }
