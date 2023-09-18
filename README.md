# pc-malloc01
Ejemplo de uso de malloc
Este programa solicita al usuario un tamaño para el arreglo, utiliza malloc para asignar la memoria necesaria para el arreglo de enteros, llena el arreglo con algunos valores, imprime los valores y, finalmente, libera la memoria asignada con free para evitar pérdidas de memoria.


malloc es una función en el lenguaje de programación C que se utiliza para asignar memoria dinámica durante la ejecución de un programa. La palabra "malloc" es una abreviatura de "memory allocation" (asignación de memoria). Esta función permite reservar un bloque de memoria en tiempo de ejecución y devuelve un puntero al inicio de ese bloque de memoria.

En C, la memoria se puede asignar de dos maneras principales:

Memoria estática: Se asigna en tiempo de compilación y es de tamaño fijo. La memoria estática se utiliza para variables globales y locales estáticas. Su tamaño no puede cambiar durante la ejecución del programa.

Memoria dinámica: Se asigna en tiempo de ejecución utilizando funciones como malloc, calloc o realloc. La memoria dinámica es útil cuando no se conoce el tamaño exacto necesario en el momento de la compilación o cuando se necesita asignar y liberar memoria de manera flexible durante la ejecución del programa.
