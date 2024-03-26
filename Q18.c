/*18. Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
das implementações que você criou para os dois problemas de ordenação anteriores,
considerando apenas arrays de elementos tipo int e compare os resultados obtidos. O que se
conclui nesse caso?
*/

/*A implementação do algoritmo de ordenação rápida é geralmente mais eficiente do que a implementação do algoritmo de ordenação por inserção. 
Isso acontece porque o algoritmo de ordenação rápida divide o array em subarrays menores e, em seguida, ordena esses subarrays de forma recursiva. 
Enquanto isso, o algoritmo de ordenação por inserção compara cada elemento do array com todos os elementos anteriores a ele.
Para arrays pequenos, a diferença de desempenho entre as duas implementações pode ser insignificante. 
No entanto, à medida que o tamanho do array aumenta, a diferença de desempenho entre os dois algoritmos pode se tornar considerável.*/