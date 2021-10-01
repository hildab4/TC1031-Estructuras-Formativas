#insertion

**Análisis de complejidad temporal**

El algoritmo siempre inserta el dato al final de la lista, por lo que no depende de la longitud de la misma. Tiene complejidad temporal de O(1).

#search

**Análisis de complejidad temporal**

Dentro del algoritmo se recorre la lista para encontrar el valor deseado, por lo que depende de la longitud que esta tenga. Tiene una complejidad temporal de O(n) para el peor de los casos.

#update

**Análisis de complejidad temporal**

El algoritmo recorre la lista hasta encontrar la posición en que se cambiará el dato, por lo que esto depende de la longitud de la lista. Tiene complejidad temporal de O(n) para el peor de los casos. 

#deleteAt

**Análisis de complejidad temporal**

El algoritmo recorre la lista hasta encontrar la posición de donde se eliminará el dato, dependiendo de la longitud de la lista. Tiene complejidad temporal de O(n) para el peor de los casos.

#toStringForward y toStringBackward

**Análisis de complejidad temporal**

El algoritmo recorre la lista para guardar cada valor en la variable de tipo string, al tener que recorrer la lista depende de la longitud que tenga. Tiene complejidad temporal de O(n) para todos los casos.