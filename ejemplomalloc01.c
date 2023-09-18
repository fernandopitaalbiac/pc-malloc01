#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    // Usamos malloc para asignar memoria para un arreglo de enteros de tamaño n
    int *arreglo = (int *)malloc(n * sizeof(int));
    
    // Verificamos si la asignación de memoria fue exitosa
    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1; // Terminamos el programa con un código de error
    }
    
    // Llenamos el arreglo con algunos valores
    for (int i = 0; i < n; i++) {
        arreglo[i] = i * 2;
    }
    
    // Imprimimos los valores del arreglo
    printf("Valores del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    
    // Liberamos la memoria asignada con malloc
    free(arreglo);
    
    return 0;
}

