Neste VPL, vocês vão continuar trabalhando com a classe Racional, no qual trabalhamos em um VPL anterior. Sendo assim, primeiramente vocês devem implementar o que é pedido naquele VPL antes de prosseguir.

Neste VPL, nós vamos alterar a classe Racional de forma a utilizar dois tipos de Polimorfismo Aparente. Primeiramente, utilizaremos Polimorfismo de Sobrecarga para escrever os operadores +, *, /, - (unário), e - (binário) de forma que eles suportem números racionais. Além disso, utilizaremos Polimorfismo de Conversão para podermos converter números racionais em outros tipos primitivos de C++.

Além disso, continuaremos praticando Tratamento de Exceções. Para isso, alteraremos a classe Racional de forma que ela lance exceções do tipo. 

// Representa a uma exceção.
// Não tem atributos, porque o denominador neste caso é sempre zero.
struct ExcecaoDivisaoPorZero {};
