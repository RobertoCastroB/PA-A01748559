//Roberto Castro Barrios. A01748559
#include <stdio.h>

int y; //Variable Global
int x = 10; //Variable globar con valor inicial del
char arr[20]; //Arreglo
int main() {
    char initial = '1'; //Variable en Stack
    char nombre[10];
    printf("Size of Global Variable: %d\n", sizeof(y));
    printf("Size of Global Variable w/InitialValue: %d\n", sizeof(x));
    printf("Size of Stack Variable: %lu\n", sizeof(initial));
    printf("Size of Global Array: %lu\n", sizeof(arr));
    printf("Size of Stack Array: %lu\n", sizeof(nombre));
    return 0;
}