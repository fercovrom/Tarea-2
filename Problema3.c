/*Fernando Covarrubias Romero
Problemas Simples
Conversión de dólares a pesos*/

  #include <stdio.h>

  int main() 
  {
      float dolar, pesos;
      printf("Ingrese la cantidad en dolares: ");
      scanf("%f", &dolar);
    
      pesos = dolar * 11.96;
    
      printf("Equivalente en pesos: $%.2f\n", pesos);
    
      return 0;
  }
