#ordenaSeleccion

**Análisis de complejidad temporal**

El algoritmo está conformado por dos ciclos for anidados, por lo que la complejidad temporal en el peor de los casos es de O(n^2).

#ordenaBurbuja

**Análisis de complejidad temporal**

Dentro del algoritmo se encuentran dos ciclos for anidados, por lo que la complejidad temporal en el peor de los casos es de O(n^2).

#ordenaMerge

**Análisis de complejidad temporal**

El algoritmo tiene una complejidad temporal de O(n * log n), ya que es una función recursiva, en la que se divide varias veces el vector, O(log n), para juntar el vector dividido depende de la longitud del vector, O(n). Por lo que la complejidad temporal en el peor de los casos es de O(n * log n).

#busqSecuencial

**Análisis de complejidad temporal**

El algoritmo recorre el vector elemento por elemento, por lo que la cantidad de pasos a realizar depende de la longitud del mismo; así que la complejidad temporal en el peor de los casos es de O(n).

#busqBinaria

**Análisis de complejidad temporal**

El algoritmo va dividiendo el vector resultante a la mitad, comparando los valores inicial, el de enmedio, final, para ubicar si el valor buscado es menor o mayor al de la posición analizada. La función utilizada para ordenar el arreglo es OrdenaMerge, con una complejidad temporal de O(n * log n); por lo tanto, la complejidad temporal en el peor de los casos es de O(log n), ya que esta es mayor a la de la función OrdenaMerge.