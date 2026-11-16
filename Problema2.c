/*Fernando Covarrubias Romero
Área y circunferencia de un círculo*/

    #include <stdio.h>
    #define PI 3.141592653589793

    int main() 
    {
        float radio, area, circunferencia;
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);
        
        area = PI * radio * radio;
        circunferencia = 2 * PI * radio;
    
        printf("Area: %.2f\n", area);
        printf("Circunferencia: %.2f\n", circunferencia);
    
        return 0;
    }
