<div align="center">

# Trie  

 <div align="left">
  ### Definición  
   Trie es una estructura de datos enfocada a la facilitación de la búsqueda de una secuencia de caracteres dentro de un conjunto de cadenas o de caracteres dado. Con esto queremos decir que buscaremos una cadena A dentro de un conjunto de caracteres B, un conjunto de cadenas C o una cadena S.
   Realizamos esta búsqueda construyendo un árbol. Este árbol está compuesto por nodos y cada nodo es un caracter que pertenece a un universo definido U. Los nodos son posicionados de acuerdo a su posición en el String que estamos introduciendo al árbol, iniciando con un vacío. Entonces, 
   del vacío sale la primera letra, de la primera letra sale la segunda y así sucesivamente hasta llegar a un nodo que se marca como el final del String. Al momento de introducir los siguientes Strings, las ramas creadas compartirán una parte de las ramas previamente añadidas si es que tienen
   prefijos en común. Por ejemplo, si tenemos los Strings "banco" y "barco", compartirán la rama B-A y continuarán en bifurcaciones distintas.
   En código, este árbol estará compuesto por mapas o por arrays. Si utilizamos arrays, la búsqueda de nodos será más rápida, pero cada caracter no utilizado en las bifurcaciones de un nodo será marcado como nulo y estaremos sacrificando memoria. Y si utilizamos mapas, no tendremos nodos nulos, pero la búsqueda será de O(n).
   
   ### Código
   [Array] (https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/EstructurasDeDatos/Trie/TrieArray.cpp)
   [Map] (https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/EstructurasDeDatos/Trie/TrieConMapa.cpp)
   
   ### Bibliografía
   [Toptal] (https://www.toptal.com/java/the-trie-a-neglected-data-structure)
   [TopCoder] (https://www.topcoder.com/thrive/articles/Using%20Tries)
   [Geeks For Geeks](https://www.geeksforgeeks.org/trie-insert-and-search/)
   
