#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C que pueda calcular y presentar cuántas cifras
 tiene un determinado valor numérico introducido por teclado.*/

int main(){
  int numero;
  int cociente = 0;
  int divisor = 1;
  int contador = 0;

  printf("Ingresa su numero porfavor: ");
  scanf("%d", &numero);

  while (cociente !=1){
    contador++;
    divisor = divisor * 10;
    cociente = numero / divisor;
        if (cociente == 1){
          printf("El numero que ingreso tiene %d digitos\n", contador + 1);
        }else if(cociente < 1){
            printf("El numero que ingreso tiene %d digitos\n", contador);
          cociente = 1;
        }else if(numero < 10){
            printf("Solo tiene un digito\n");
        }
  }
return 0;
  }
