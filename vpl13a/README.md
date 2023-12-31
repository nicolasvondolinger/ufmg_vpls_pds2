Neste VPL, vocês vão trabalhar com um programa que executa o "Jogo da Vida" desenvolvido por John Horton Conway. Embora não seja um "jogo" no sentido tradicional, ele apresenta um comportamento interessante, especificado com poucas regras. O programa segue as regras da Vida (https://pt.wikipedia.org/wiki/Jogo_da_vida) para mostrar o comportamento contínuo de um conjunto de células em uma matriz. Esta matriz modela um Toro (https://pt.wikipedia.org/wiki/Toro_(topologia)) onde cada célula da matriz (sem exceção) tem exatamente 8 vizinhas, ou seja, considera-se que após a última coluna, vem a primeira coluna que após a última linha vem a primeira linha (e vice versa). Por exemplo, numa matriz de 4x5 (4 linhas e 5 colunas) a esquerda da célula [0, 0] está a célula [0, 4] e abaixo da célula [3, 4] está a célula [0, 4]. 

Cada célula da matriz pode estar viva ou morta, e a cada iteração, células mortas podem reviver ou células vivas podem morrer. Os nascimentos e mortes seguem o seguinte conjunto de regras:

- Cada célula possui oito células vizinhas. As vizinhas de uma célula são as células diretamente acima, abaixo, à direita, à esquerda, diagonalmente acima à direita ou à esquerda e diagonalmente abaixo à direita ou à esquerda. 
- Se uma célula ocupada não possui vizinhas ou possui apenas uma, morre de solidão. Se uma célula ocupada possui mais de três vizinhas, morre de superpopulação.

- Se uma célula vazia possui exatamente três células vizinhas ocupadas, há o nascimento de uma nova célula para substituir a célula vazia.

Nascimentos e mortes são instantâneos e ocorrem simultaneamente no início de cada iteração. Uma célula que morre por qualquer razão pode ajudar a provocar o nascimento, mas uma célula recém-nascida não pode ressuscitar uma célula que está morrendo, nem a morte de uma célula impede a morte de outra, digamos, por meio da redução da população local.

Exemplos em: https://www.youtube.com/watch?v=23MBR2pZoDQ


A função main() recebe pela entrada padrão os seguintes dados:

<número de iterações a serem executadas>

<número de linhas na matriz>  <número de colunas na matriz>

<linha da 1a. célula via>  <coluna da 1a. célula via>

<linha da 2a. célula via>  <coluna da 2a. célula via>

<linha da 3a. célula via>  <coluna da 3a. célula via>

Por exemplo:

5
25 60
1 2
2 3
3 1
3 2
3 3
21 22
22 23
23 21
23 22
23 23
19 8
18 6
18 8
17 7
17 8
