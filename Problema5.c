/*Fernando Covarrubias Romero
Problemas con Condicional SI (if)
Descuento en electrodomésticos */

#include <stdio.h>

int main() 
  {
    float precio, total , descuento;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &precio);
    
    if (precio > 2500) 
  {
        descuento = precio * 0.08;
        total = precio - descuento;
    } 
    else 
  {
        total = precio;
    }
    
    printf("El total a pagar es: %.2f\n", total);
    
    return 0;
  }
