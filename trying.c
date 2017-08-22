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
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("%d\n",n); 
  
  arreglo1.tam = n;

  return 0;
}