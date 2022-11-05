<h1 align="center"> PRIM </h1>

### Concepto 

El algoritmo de Prim es un algoritmo de teoría de grafos, parecido al algoritmo de [Kruskal](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Teoria%20de%20Grafos/Kruskal/Kruskal.cpp)
ya que busca encontrar un árbol de extensión mínimo en un grafo no dirigido y cuyas aristas tienen pesos. La diferencia en este algoritmo,
es que al poder ser inicializado desde cualquier vertice del grafo, se obtendra distintos arboles de extensión según el vértice inicial.
El algoritmo incrementa continuamente el tamaño de un árbol, comenzando por un vértice inicial al que se le van agregando sucesivamente vértices cuya distancia a 
los anteriores es mínima. Esto significa que en cada paso, las aristas a considerar son aquellas que conectan con vértices que ya pertenecen al árbol.
El árbol recubridor mínimo está completamente construido cuando no quedan más vértices por agregar.
Este proceso se realiza siguiendo los siguientes pasos:

1. Seleccionar un nodo cualquiera.
2. Mandar los nodos vecinos no visitados a una cola de prioridad por peso.
3. Sacar el nodo de la cola, evitando los visitados. 
4. Repetir el paso 2 y 3 (hasta que todos los vértices pertenezcan al árbol).

### Código
* [PRIM](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Teoria%20de%20Grafos/PRIM/PRIM.cpp)

### Bibliografía
- [Video de apoyo ](https://www.youtube.com/watch?v=cplfcGZmX7I&t=1s). Basic of PRIM.
- Wikipedia. [Algoritmo de Prim](https://es.wikipedia.org/wiki/Algoritmo_de_Prim#:~:text=El%20algoritmo%20incrementa%20continuamente%20el,que%20ya%20pertenecen%20al%20%C3%A1rbol.)
