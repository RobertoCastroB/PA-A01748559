//Roberto Castro Barrios. A01748559
#include <stdio.h>

int main() 
{
    int *p;
    while (1){
        p = malloc(1024);
    }

    return printf("Size limit memory: %lu", sizeof(p); //al no liberar memoria, en cierto punto tendremos "Memory leak".
}