//11. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]). 
//Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. 
//Quais serão os valores de x+1, x+2 e x+3 se: ◦ x for declarado como char? ◦ x for declarado como int? ◦ x for declarado como float? 
//◦ x for declarado como double? Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.

/*
1. x declarado como char:

O tipo char ocupa 1 byte.
x+1 apontará para o endereço 4092 + 1 = 4093.
x+2 apontará para o endereço 4092 + 2 = 4094.
x+3 apontará para o endereço 4092 + 3 = 4095.

2. x declarado como int:

O tipo int ocupa 2 bytes.
x+1 apontará para o endereço 4092 + 2 = 4094.
x+2 apontará para o endereço 4092 + 4 = 4096.
x+3 apontará para o endereço 4092 + 6 = 4098.

3. x declarado como float:

O tipo float ocupa 4 bytes.
x+1 apontará para o endereço 4092 + 4 = 4096.
x+2 apontará para o endereço 4092 + 8 = 4100.
x+3 apontará para o endereço 4092 + 12 = 4104.

4. x declarado como double:

O tipo double ocupa 8 bytes.
x+1 apontará para o endereço 4092 + 8 = 4100.
x+2 apontará para o endereço 4092 + 16 = 4108.
x+3 apontará para o endereço 4092 + 24 = 4116.
*/