<h1 align="center"> BIT </h1>

### Definición

El Binary Indexed Tree (BIT) es una estructura de datos que permite modificaciones y consultas en tiempo O(logn), siendo n la cantidad de elementos en el arrreglo a consultar. 
Usa la ayuda de una función f y calcula respuestas parciales para optimizar el tiempo de consulta y de modificación.
Consideraremos que las respuestas parciales de la estructura serán almacenadas en un arreglo aparte. La cantidad de memoria que necesita el BIT es n+1.
El Binary Indexed Tree es una estructura de datos que almacena los resultados de un operación determinada en un intérvalo empezando en 0, por lo cual solo será necesario
restar los resultados de 2 intervalos desde 0 para saber el resultado entre los dos numeros finales de cada intervalo inicial.
Es necesario entender que el árbol indexado en sí no existe, todos los datos en realidad están guardados en un array.

Lo que propone el BIT es almacenar en una posición definida por el Bit menos significativo de la posición que precede. De esta manera realizando la operación repetidas veces, 
se podrá actualizar y consultar valores ya sea sumando el BMS para la actualización, o restandolo a la posición para las consultas.

### Código 
- [BIT](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/EstructurasDeDatos/BIT/bit.cpp)

### Bibliografía
- [Video de apoyo ](https://www.youtube.com/watch?v=DPiY9wFxGIw&t=1s). Binary Index Tree
- [BIT structure](https://use-the-index-luke.com/es/sql/i%CC%81ndice-anatomi%CC%81a/b-tree)
