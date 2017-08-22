#include <stdio.h>

struct arreglo {
  int* datos;
  unsigned int tam;
} arreglo1;

int main( int argc, const char* argv[] )
{
//  int arreglo[100], n, c, d, swap;
  int arreglo[100];
  int n,c,d,swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
  
  // std::cout << "hello";


  for (c = 0; c < n; c++)
    scanf("%d", &arreglo[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arreglo[d] > arreglo[d+1]) /* For decreasing order use < */
      {
        swap       = arreglo[d];
        arreglo[d]   = arreglo[d+1];
        arreglo[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", arreglo[c]);

  return 0;
}