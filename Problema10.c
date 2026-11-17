/*Fernando Covarrubias Romero
Problemas con Estructuras Repetitivas (For, While)
Contar positivos, negativos y nulos en 100 números */

#include <stdio.h>

int main() 
  {
    int p = 0, n = 0, nul = 0, i;
    
    printf("Ingrese los numeros:\n");
    for (int i = 0; i < 100; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &n);
        
        if (n > 0) 
        {
            p = p + 1;
        } 
        else 
        {
          if (n < 0) 
        {
            n = n + 1;
        } 
          else 
        {
            nul = nul + 1;
        }
        }
    }
    
    printf("\nResultados:\n");
    printf("Positivos: %d\n", p);
    printf("Negativos: %d\n", n);
    printf("Nulos: %d\n", nul);
    
    return 0;
    }
}
