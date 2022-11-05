<h1 align="center"> Union Find (By Rank)</h1>

### Definición
Union Find se dedica a relacionar objetos en forma de nodos en un tipo de arbol jerárquico, al cual se le podrán hacer consultas para ver si 2 nodos se encuentran en el 
mismo conjunto de nodos. Entendiendo este concepto se puede añadir a la efectividad de esta estructura de datos tan solo con asignar rangos a los nodos creados y unidos en base 
a la cantidad de nodos que se unen a ellos, en este proceso se escoge un nodo padre al que se le dara mayor rango aumentandole esta propiedad en 1, ya sea por que
tiene inicialmente ya un rango mayor al nodo al que se está uniendo, o en caso de rangos iguales, por el orden en que se ingresan los nodos a unirse.
El nodo que se elija como hijo será asignado no como hijo del otro, sino como hijo del padre del otro, por lo que en un principio cada nodo creado es su propio padre.
Con esta ayuda se tendra como máximo dos niveles de profundidad en el arbol que básicamente se crea al usar UnionFind by Rank.
### Código
[Union Find](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/EstructurasDeDatos/UnionFind/UnionFind.cpp)

### Bibliografía
* [Video de apoyo](https://www.youtube.com/watch?v=ID00PMy0-vE). Union Find By rank
* Techie Delight [Union Find Structure](https://www.techiedelight.com/es/disjoint-set-data-structure-union-find-algorithm/)

