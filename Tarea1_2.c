//Roberto Castro Barrios. A01748559
#include <stdint.h>
#include <stdio.h>

int main()
{
    int64_t x = 1;
    for (int i = 0; i < 63; i++ ){
      printf("x << i(%d) = %lld\n", i, x << i);
    } 
    return 0;
}