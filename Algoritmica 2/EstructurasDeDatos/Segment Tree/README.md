<h1 align="center"> Segment Tree </h1>

### Definición
El Segment Tree es una estructura de datos muy versátil que sirve para responder varias consultas de agregación como máximos, mínimos, sumas, o promedios
en tiempo log n para un conjunto de n elementos.  También se pueden hacer actualizaciones de elementos
de ese arreglo. 
Los nodos de un Segment Tree deben mantener 3 operaciones:
- Asignar la información correspondiente al nodo
- Generar la información del nodo a partir de dos nodos cuyos intervalos sean una partición del intervalo actual (merge).
- Devolver la información del intervalo que el nodo representa.
La creación y numeración de cada nodo sigue un orden definido por la operacion de 2 * posición actual+1 (nodo izquierdo debajo del actual, y 2 * posicion actual+2 (nodo derecho).

### Código
* [Segment Tree](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/EstructurasDeDatos/Segment%20Tree/segmentTree.cpp)

### Bibliografía
* [Video de apoyo ](https://www.youtube.com/watch?v=Ic7OO3Uw6J0&t=1s). Basics of Segment Tree
