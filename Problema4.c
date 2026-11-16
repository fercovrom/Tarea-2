/*Fernando Covarrubias Romero
Problemas Simples
Monto de dinero al finalizar el mes*/

  #include <stdio.h>

  int main() 
  {
      float dinero, interes1 , interes2=0 , montoFinal;
      printf("Ingrese la cantidad de dinero invertida:");
      scanf("%f", &dinero);
      printf("Ingrese la tasa de interes mensual(el porcentaje de interes): ");
      scanf("%f", &interes1);

      interes2 = interes1 / 100;
      interes2 = interes2 * dinero;
      montoFinal = dinero + interes2;
    
      printf("El monto total al finalizar el mes es: %.2f\n", montoFinal);
    
      return 0;
  }
