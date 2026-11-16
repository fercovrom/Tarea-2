/*Fernando Covarrubias Romero
Suma, resta y multiplicación de dos números*/

  #include <stdio.h>

  int main() 
  {
      float num1, num2;
      printf("Ingrese el primer numero: ");
      scanf("%f", &num1);
      printf("Ingrese el segundo numero: ");
      scanf("%f", &num2);
    
      printf("Suma: %.2f\n", num1 + num2);
      printf("Resta: %.2f\n", num1 - num2);
      printf("Multiplicacion: %.2f\n", num1 * num2);
    
      return 0;
  }
