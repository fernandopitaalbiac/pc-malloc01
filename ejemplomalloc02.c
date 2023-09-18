#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    
    // Usar malloc para asignar espacio para un entero
    p = (int *)malloc(sizeof(int));
    
    if (p == NULL) {
        printf("Error al asignar memoria.\n");
        return 1; // Terminar con un código de error
    }
    
    // Asignar un valor al entero
    *p = 42;
    
    // Imprimir el valor
    printf("El valor es: %d\n", *p);
    
    // Liberar la memoria asignada con malloc
    free(p);
    
    return 0;
}
