<h1 align="center"> Subset Sum </h1>

### Concepto 

El problema de la suma de subconjuntos es conocido en la algorítmica por ser NP Hard. Es decir, dada su intratabilidad no hay ningún algoritmo que demore un tiempo razonable (polinómico) para solucionarlo. Hay formas de cálculo poco convencionales para solucionar este problema. Para el caso especial donde la suma s es la mitad de la suma total de los elementos Toth y Martello le llaman “Value independent Knapsack Problem” o “Stickstacking Problem”. Y otros prefieren decir que es un caso especial del Problema de la Mochila donde los pesos y los valores son iguales.
ALGORITMOS CONOCIDOS
Un algoritmo exacto por fuerza bruta puede diseñarse seleccionando los subconjuntos tomados de a 1, de a 2, de a 3, ..., de a n . Y verificando si la unión de ellos forma un conjunto cuyos elementos suman S. Esta idea es claramente intratable.
Un algoritmo pseudo-Polinomial basado en la técnica la programación dinámica.

Un algoritmo de aproximación puede resolver la siguiente versión del problema. Dado un conjunto E de N enteros y un entero S , devuelve:

- Que existe la suma, si hay un subconjunto de E cuya suma de los elementos es s;
- Que no, si no hay un subconjunto de E cuya suma de los elementos es entre (1-c) s y s para un pequeño c> 0;
- Nada, si hay un subconjunto de E cuya suma de los elementos está entre (1-c) s y s , pero ninguno cuya suma es S.

### Código Base
- [Subset Sum](https://github.com/juanclawav/Algoritmica-UPB/blob/main/Algoritmica%202/Dynamic%20Programming/Subset%20Sum/SubsetSum.cpp)

### Bibliografía

- [Video de apoyo 2](https://www.youtube.com/watch?v=kyLxTdsT8ws). Basic of Subset Sum
- [Conceptos de Trie](https://es.scribd.com/document/365684561/El-Subset-Sum-Problem)
