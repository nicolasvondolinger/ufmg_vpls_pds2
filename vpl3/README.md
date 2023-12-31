O objetivo desse VPL é praticar a utilização dos conteiners da biblioteca padrão do C++.

Você deve usar a biblioteca <vector> para implementar um programa que computa a multiplicação de duas matrizes de números inteiros. Matrizes nada mais são que "vetores de vetores", ou seja, uma matriz de NxM nada mais é que um vetor (com N elementos) onde cada elemento deste vetor por sua vez é um vetor (com M elementos).

Sendo assim, você pode declarar uma matríz com o seguinte código:


vector<vector<int>> matriz;


Este código cria uma matriz vazia. Caso queira inicializar esta matriz com NxM elementos, você pode escrever o seguinte código: 


vector<vector<int>> matriz(N, vector<int>(M));


Entrada:

Primeiramente, o sistema deve ler (da entrada padrão) três números (l1, l2, c2) representando as dimensões das duas matrizes, de forma que a dimensão da primeira matriz é l1xl2 e a dimensão da segunda matriz é l2xc2. Em seguida, as matrizes são lidas, uma linha por vez.


Por exemplo:


3 5 3
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
11 12 13
21 22 23
31 32 33
41 42 43
51 52 53  

Sáida:
O sistema deve imprimir o resultado da multiplicação na saída padrão, onde cada linha do arquivo contém numa linha da matríz. Importante: Deve haver exatamente um 'espaço' entre cada elemento da linha, e um 'endl' após o último elemento da linha.

Por exemplo:
 

2115 2180 2245
3665 3780 3895
5215 5380 5545


Referências: 
https://en.cppreference.com/w/cpp/container/vector
