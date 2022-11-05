<h1 align="center"> Edmonds Karp </h1>

### Concepto 

El algoritmo es idéntico al algoritmo de [Ford-Fulkerson](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Teoria%20de%20Grafos/Maximo%20Flujo/Ford%20Fulkerson/ford.cpp), excepto porque el orden para ir buscando los "caminos" aumentantes está definido. El "camino" encontrado debe ser el más corto que tiene capacidad disponible. Esto se puede encontrar mediante una búsqueda en anchura (BFS), ya que dejamos que los bordes tengan unidad de longitud. Otra propiedad de este algoritmo es que el largo del árbol resultante aumentante más corto se incrementa monotonamente.

### Código
* [Edmonds Karp](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Teoria%20de%20Grafos/Maximo%20Flujo/Edmond's%20Karp/edmonds.cpp)

### Bibliografía
* [Video de apoyo](https://www.youtube.com/watch?v=SqGeM3FYkfo)
* Wikipedia. [Edmonds Karp](https://es.wikipedia.org/wiki/Algoritmo_de_Edmonds-Karp)
