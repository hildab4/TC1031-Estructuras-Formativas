#visit

**Análisis de complejidad temporal**

El algoritmo recorre el árbol BST de cuatro maneras distintas (preorder, inorder, postorder, bylevel); ya que se recorre el árbol completo, la complejidad temporal de cada función dentro de visit es de O(n). Por lo tanto, si se llama a 4 funciones con O(n), se podría decir que la función visit tendría una complejidad temporal del producto de las cuatro complejidades anteriores, es decir O(n^4).

#height

**Análisis de complejidad temporal**

Dentro del algoritmo se recorren las ramas del árbol para encontrar la más larga, en el peor de los casos se tendría que recorrer todo el árbol; por lo que la complejidad temporal es de O(n) para el peor de los casos.

#ancestors

**Análisis de complejidad temporal**

El algoritmo busca el dato en el árbol antes de comenzar, con esta función find en el peor de los casos se tendría que recorrer todo el árbol para saber si el dato existe o no, complejidad de O(n); además recorre el árbol para regresar true o false en la función ancestors, por lo que la complejidad temporal es de O(n). Por lo tanto, es el producto de ambas complejidades temporales, es decir O(n^2) para el peor de los casos.

#whatlevelamI

**Análisis de complejidad temporal**

El algoritmo recorre el árbol hasta encontrar el dato que busca, por lo que en el peor de los casos tendría que pasar por cada elemento del árbol para encontrarlo; entonces la complejidad temporal es de O(n) para el peor de los casos.