#include <stdio.h>
#include <time.h>
#include <stdlib.h>  

  struct arreglo {
    int* datos;
    unsigned int tam;
  } arreglo1;

int main( int argc, const char* argv[] )
{
  int n;
  printf("Ingresa el numero de elementos\n");
  scanf("%d", &n);
  arreglo1.tam = n;
  arreglo1.datos = (int *) malloc(n);

  int c,d,swap;
    srand(time(NULL));   
  for (c = 0; c < n; c++)
  arreglo1.datos[c] = rand() % (65 + 1 - 0) + 0; 
  printf("Estos son los numeros desordenados:\n");
  
  for (c = 0 ; c < ( n ); c++)
  {
    printf("%d\n", arreglo1.datos[c]);
      
    for (d = 0 ; d < n - c - 1; d++)
    {
      
      if (arreglo1.datos[d] > arreglo1.datos[d+1]) /* For decreasing order use < */
      {
    
        swap       = arreglo1.datos[d];
        arreglo1.datos[d]   = arreglo1.datos[d+1];
        arreglo1.datos[d+1] = swap;
    
      }
    }
  }
 
  printf("Estos son los enteros que ingresaste ordenados de acuerdo a Bubblesort:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", arreglo1.datos[c]);
  return 0;
}