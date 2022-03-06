#include <stdint.h>
#include <stdio.h>

int main()
{
    int64_t x = 1;
    for (int i = 0; i < 65; i++ ){
      printf("x << i(%d) = %lld\n", i, x << i);
    } 
    return 0;
}