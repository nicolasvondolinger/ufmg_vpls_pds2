Este é uma continuação do VPL anterior. Sendo assim, primeiramente você deve implementar o que é pedido naquele VPL antes de prosseguir. Em seguida, copie o código de jogo_da_vida.cpp para este VPL.

Neste VPL, nós vamos continuar praticando programação defensiva. Mais especificamente, nós vamos alterar o código do VPL anterior de forma a lançar e tratar determinadas exceções. Entretanto, você terá um pouco mais de trabalho aqui do que teve no último VPL na qual abordamos tratamento de exceção.

Primeiramente, você deve alterar o código da classe Dicionário, de forma que ele lance as seguintes exceções:


DicionarioVazio: Indica que o dicionário está vazio.

ChaveInexistente: Indica que uma determinada chave não está no dicionário.

ChaveRepetida: Indica que uma determinada chave já se encontra no dicionário.


Cada uma das precondições indicadas na definição da classe corresponde a uma dessas exceções.

A função main já está quase toda implementada, você deve *apenas* acrescentar mais três blocos catch, i.e. um bloco para cada uma das exceções listadas acima.

O tratamento consiste em exibir uma mensagem de erro, e *continuar* a execução do programa. As mensagens de erro para cada exceção são as seguintes:


DicionarioVazio: 

  cout << "Não foi possível realizar a operação: Dicionário vazio" << endl;

ChaveInexistente: 

  cout << "Não foi possível realizar a operação: A chave "  << ?????? << " não está no dicionário" << endl

ChaveRepetida: 

  cout << "Não foi possível realizar a operação: A chave " << ?????? << " já está no dicionário" << endl;  


O código indicado por ?????? deve ser substituído pela chave que geraou a respectiva exceção.
