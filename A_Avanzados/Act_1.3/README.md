# Backtracking y Ramificacion y Poda

Solve maze problem

Utilizando la técnica de programación de "backtracking" y la de "ramificación y poda", escribe en equipos de máximo dos peronas, en C++ un programa que resuelva un laberinto.

El programa recibe dos numeros enteros M y N, seguido de M líneas de N valores booleanos(0|1) separados por un espacio, por la entrada estándar que representan el laberinto.  Un 1 representa una casilla en la que es posible moverse, un 0 es una casilla por la que NO se puede pasar.
El origen o casilla de inicio es siempre la casilla (0,0) y la salida o meta es siempre la casilla (M-1, N-1)
La salida del programa es una matriz de valores booleanos (0|1) que representan el camino para salir del laberinto. Primero debe mostrarse la solución utilizando la técnica de backtracking, y luego utilizando la técnica de ramificación y poda.

Tu programa debe ser llamado main.cpp y debe compilar utilizando el comando g++ en un ambiente linux.

ejemplo de entrada: <br>
4 <br>
4 <br>
1 0 0 0 <br>
1 1 0 1 <br>
0 1 0 0 <br>
1 1 1 1 <br>


ejemplo de salida: <br>
1 0 0 0 <br>
1 1 0 0 <br>
0 1 0 0 <br>
0 1 1 1 <br>

1 0 0 0 <br>
1 1 0 0 <br>
0 1 0 0 <br>
0 1 1 1 <br>
