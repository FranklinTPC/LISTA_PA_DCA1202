//3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
//As atribuições são ilegais? Justifique.

p = &i; -- Está atribuindo o endereço da variável i ao ponteiro p;

*q = &j; -- Esta expressão é ilegal. Está tentando atribuir o endereço da variável j (que é um ponteiro) a *q (que é um inteiro).

p = &*&i; -- Esta expressão é legal. O operador &* É essencialmente uma operação de identidade que retorna o endereço original, então isso é o mesmo que p = &i;.

i = (*&)j; -- Esta expressão é ilegal. A sintaxe (*&) não é válida em C.

i = *&j; -- Esta expressão é legal. É o mesmo que i = j; porque *& atua como uma operação de identidade.

i = *&*&j; -- Esta expressão é legal. Novamente, *& atua como uma operação de identidade, então isso é o mesmo que i = j;.

q = *p; -- Esta expressão é ilegal. Está tentando atribuir o valor apontado por p (que é um inteiro) a q (que é um ponteiro).

i = (*p)++ + *q; -- Esta expressão é legal, mas tem efeitos colaterais. Está incrementando o valor apontado por p, somando-o ao valor apontado por q, e atribuindo o resultado a i. O valor de i é alterado, assim como o valor apontado por p.
