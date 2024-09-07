# Mínimo Común Múltiplo en C++ (MCM)

Este programa en C++ calcula el **Mínimo Común Múltiplo (MCM)** de un conjunto de números enteros proporcionados como argumentos a través de la línea de comandos. Utiliza factorización con números primos para descomponer los números y calcular el MCM de manera eficiente.

## Funcionamiento

El programa sigue los siguientes pasos:

1. Convierte los argumentos de la línea de comandos en enteros.
2. Utiliza números primos para dividir los números tantas veces como sea posible.
3. Acumula los factores comunes y no comunes para obtener el MCM.
4. Muestra cada iteración del proceso y, finalmente, el resultado del MCM.

### Ejemplo de salida

Al ejecutar el programa con los números `45`, `33`, `27` y `52`, el resultado es el siguiente:

```bash
g++ mcm.c++ -o mcm && ./mcm 45 33 27 52
45      33      27      52      |       2;      1 x 2 = 2
45      33      27      26      |       2;      2 x 2 = 4
45      33      27      13      |       3;      4 x 3 = 12
15      11      9       13      |       3;      12 x 3 = 36
5       11      3       13      |       3;      36 x 3 = 108
5       11      1       13      |       5;      108 x 5 = 540
1       11      1       13      |       11;     540 x 11 = 5940
1       1       1       13      |       13;     5940 x 13 = 77220
1       1       1       1
El minimo comun multiplo es: 77220
```

### Explicación de la salida:

- **Columna de números**: muestra el estado actual de los números tras cada división por un número primo.
- **Factor primo**: el número primo que está dividiendo los números actuales.
- **Cálculo acumulado**: muestra cómo se multiplica el MCM acumulado por el factor primo en cada paso (por ejemplo, `1x2 = 2` significa que el MCM actual, 1, se multiplica por 2, dando como resultado 2).
- **MCM final**: el programa muestra el MCM acumulado al final del proceso, que es el MCM de los números de entrada.

## Compilación y ejecución

### Requisitos:

- Un compilador de C++ (por ejemplo, `g++`).

### Instrucciones para compilar y ejecutar:

1. Compila el programa usando `g++`:
   ```bash
   g++ mcm.c++ -o mcm
   ```

2. Ejecuta el programa con los números que quieras calcular el MCM:
   ```bash
   ./mcm [número1] [número2] [número3] [...]
   ```

   Por ejemplo:
   ```bash
   ./mcm 45 33 27 52
   ```

   Esto calculará el MCM de los números `45`, `33`, `27` y `52`.

## Detalles técnicos

- El programa utiliza un array de números primos para dividir los números de entrada.
- El proceso se repite para cada número primo hasta que todos los números se hayan reducido a 1.
- Utiliza bucles anidados para realizar las divisiones y comprobar qué números son divisibles por cada primo.
