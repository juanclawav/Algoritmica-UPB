<div align="center">

# Búsqueda Binaria    

 <div align="left">
 
 ### Definición  

La Búsqueda Binaria sirve para encontrar un miembro en un arreglo que cumpla una condicion predeterminada, especificamente el ultimo o primer elemento que la cumpla.
Logra esto dividiendo el arreglo en mitades y verificando al elemento en la mitad de una de las partes repetidas veces hasta encontrar la posición del elemento correcto. 
El algoritmo, ya sea de forma recursiva o iterativa, consiste en tener 3 variables que definen el comienzo y final del rango
de búsqueda, y el medio de este rango, en el cual esta el elemento a comprobar. Dependiendo del resultado de esta comprobacion, que será una pregunta de dos respuestas,
se proseguirá a dividir el rango actual en dos y usar el nuevo medio para realizar la misma acción, el proceso se detiene una vez que el inicio y final del rango que
sigue comprobar sean iguales. Hay que mencionar que para este algoritmo siempre se tiene al arreglo a analizar de forma ordenada, por lo cual al comprobar el elemento del
medio ya se puede asumir que una de las mitades a sus lados tendrán el mismo resultado, así dejando la otra mitad a ser comprobada.

  ### [Problemas]()  
  * [Longitud de Subsecuencia Más Larga: Sin Subsecuencia]()  
  * [Búsqueda binaria de posicion de numero en un arreglo](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Dynamic%20Programming/Binary%20Search/binarySearch.cpp)
  
  
  ## Bibliografía  
Geeks for Geeks. [Binary Search](https://www.geeksforgeeks.org/binary-search/).
