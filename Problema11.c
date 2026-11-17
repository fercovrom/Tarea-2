/*Fernando Covarrubias Romero
Problemas con Estructuras Repetitivas (For, While)
Suma de números pares entre 10 y 50 */

#include <stdio.h>

int main() 
  {
    int s = 0, i = 0;
    
    for (int i = 10; i <= 50; i = i + 2) 
    {
        s = s + i;
    }
    
    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", s);
    
    return 0;
  }
