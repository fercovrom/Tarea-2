/*Fernando Covarrubias Romero
Problemas con Condicional SI (if)
Determinar si un número es divisor del otro */

#include <stdio.h>

int main() 
  {
    int num1, num2;
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);
    
    if (num1 == 0 || num2 == 0) 
    {
        printf("No se puede dividir entre cero.\n");
    } 
    else 
      {
        if (num1 % num2 == 0) {
            printf("%d es divisor de %d.\n", num2, num1);
        } else if (num2 % num1 == 0) {
            printf("%d es divisor de %d.\n", num1, num2);
        } 
          else 
        {
            printf("Ninguno es divisor del otro.\n");
        }
      }
    
    return 0;
  }
