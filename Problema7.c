/*Fernando Covarrubias Romero
Problemas con Condicional SI (if)
Precio de un ticket de ferrocarril con descuento */

#include <stdio.h>

int main() {
    float distanciaida, distanciatotal, preciototal, descuento;
    int diasestancia;
    
    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &distanciaida);
    printf("Ingrese el tiempo de estancia (en dias): ");
    scanf("%d", &diasestancia);
    
    distanciatotal = distanciaida * 2;
    preciototal = distanciatotal * 0.23;
    
    if (diasestancia > 7 & distanciatotal > 800.0) 
    {
        descuento = preciototal * 0.30;
        preciototal = preciototal - descuento;
    }
    
    printf("El precio total del ticket es: $%.2f\n", preciototal);
    
    return 0;
}
