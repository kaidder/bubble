#include <stdio.h>
#include <stdlib.h>  

  struct arreglo {
    int* datos;
    unsigned int tam;
  } arreglo1;

int main( int argc, const char* argv[] )
{
//  int arreglo[100], n, c, d, swap;
  int n;
  printf("Ingresa el numero de elementos\n");
  scanf("%d", &n);
  printf("%d\n",n); 
  
  arreglo1.tam = n;
  arreglo1.datos = (int *) malloc(n);

  int c,d,swap;

//  arreglo1.datos[0]=1;  
  //printf("%d\n", arreglo1.datos[0]);

 printf("Ingresa %d enteros\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &arreglo1.datos[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
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