/*Fernando Covarrubias Romero
Problemas Simples
Área y circunferencia de un círculo*/

    #include <stdio.h>
    #define PI 3.141592653589793

    int main() 
    {
        float radio, area, circ;
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);
        
        area = PI * radio * radio;
        circ = 2 * PI * radio;
    
        printf("Area: %.2f\n", area);
        printf("Circunferencia: %.2f\n", circ);
    
        return 0;
    }
