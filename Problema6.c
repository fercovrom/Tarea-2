/*Fernando Covarrubias Romero
Problemas con Condicional SI (if)
Sueldo de un trabajador con aumento */

#include <stdio.h>

int main() 
  {
    float sueldo1, sueldo2, aumento;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo1);
    
    if (sueldo1 < 1000.0) 
    {
        aumento = sueldo1 * 0.15;
        sueldo2 = sueldo1 + aumento;
    } 
    else 
    {
        aumento = sueldo1 * 0.12;
        sueldo2 = sueldo1 + aumento;
    }
    
    printf("El sueldo con el aumento incorporado es: %.2f\n", sueldo2);
    
    return 0;
  }
