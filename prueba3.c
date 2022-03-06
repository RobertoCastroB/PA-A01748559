//Roberto Castro Barrios. A01748559
#include <stdint.h>
#include <stdio.h>

int main()
{
    int32_t x[1000][1000];
    for (int i = 0; i < 5; i++ ){
      for (int j = 0; j <5; j++){
          printf("Direccion en i[%d]j[%d] : %p\n",i, j,&x[i][j]);
      }
    } 
    return 0;
}