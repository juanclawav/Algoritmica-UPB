<div align="center">  

# Digit DP

 <div align="left"> 
 
### Definición 
 
El problema de la distancia de edición tiene subestructura óptima. Eso significa que el problema se puede dividir en "subproblemas" más pequeños y simples, que se pueden dividir en subproblemas aún más simples, y así sucesivamente, hasta que, finalmente, la solución se vuelve trivial (recursividad).
Aqui se quiere transformar la cadena X[1…m] en Y[1…n] realizando operaciones de edición, eliminación e inserción.
Subproblema: Transformar subcadena X[1…i] dentro Y[1…j] realizando operaciones de edición en la subcadena X.
Caso 1: Hemos llegado al final de cualquiera de las subcadenas.
Si la subcadena X está vacía, inserte todos los caracteres restantes de la subcadena Y dentro X. El costo de esta operación es igual a la cantidad de caracteres que quedan en la subcadena Y.
('', 'ABC') ——> ('ABC', 'ABC') (cost = 3)
Si subcadena Y está vacía, inserte todos los caracteres restantes de la subcadena X dentro Y. El costo de esta operación es igual a la cantidad de caracteres que quedan en la subcadena X.
('ABC', '') ——> ('', '') (cost = 3)
Caso 2: Los últimos caracteres de la subcadena X y Y son lo mismo.
Si los últimos caracteres de la subcadena X y subcadena Y coincide, no es necesario hacer nada, simplemente recurra para la subcadena restante X[0…i-1], Y[0…j-1]. Como no se trata de ninguna operación de edición, el coste será 0.
('ACC', 'ABC') ——> ('AC', 'AB') (cost = 0)
Caso 3: Los últimos caracteres de la subcadena X y Y son diferentes.
Si los últimos caracteres de la subcadena X y Y son diferentes, devuelven el mínimo de las siguientes operaciones:
Inserte el último carácter de Y dentro X. La talla de Y se reduce en 1, y X sigue siendo el mismo. Esto representa X[1…i], Y[1…j-1] a medida que avanzamos en la subcadena de destino, pero no en la subcadena de origen.
('ABA', 'ABC') ——> ('ABAC', 'ABC') == ('ABA', 'AB') (using case 2)
Eliminar el último carácter de X. El tamaño de X se reduce en 1, y Y sigue siendo el mismo. Esto representa X[1…i-1], Y[1…j] a medida que avanzamos en la string de origen, pero no en la string de destino.
('ABA', 'ABC') ——> ('AB', 'ABC')
Sustituir (Reemplazar) el carácter actual de X por el carácter actual de Y. El tamaño de ambos X y Y se reduce en 1. Esto explica X[1…i-1], Y[1…j-1] a medida que avanzamos tanto en la string de origen como en la de destino.
('ABA', 'ABC') —> ('ABC', 'ABC') == ('AB', 'AB') (using case 2)
Es básicamente lo mismo que el caso 2, donde los dos últimos caracteres coinciden y nos movemos tanto en la string de origen como en la de destino, excepto que cuesta una operación de edición.
