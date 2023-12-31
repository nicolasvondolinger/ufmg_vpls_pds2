Neste VPL, vocês vão continuar trabalhando com a classe Vetor (VPL09). Sendo assim, primeiramente vocês devem implementar o que é pedido naquele VPL antes de prosseguir. Em seguida, copie-e-cole sua implementação de vetor.cpp neste VPL.

O que nós faremos neste VPL é alterar aspectos deste código, utilizando técnicas de programação defensiva/tratamento de exceções para tornar o código mais robusto à erros de entrada de dados dos usuários.

Mesmo que o código que você implementou no VPL anterior esteja correto, ele pode apresentar um comportamento indeterminado/inesperado diante de uma má operação do usuário. Um software robusto precisa antever estes episódios e tratá-los de alguma forma, mesmo que seja abortando o programa e explicando claramente ao usuário o que aconteceu. Para ilustrar como lidar com este tipo de erro, nós vamos adicionar ao código do VPL o tratamento de algumas exceções.

Primeiramente, você deve alterar o código da classe Vetor, de forma que ele lance as seguintes exceções:

// Lançada quando o intervalo [inicio, fim] não contém nenhum índice.
struct IntervaloVazio {
  int inicio; // Índice de início do vetor que lançou a excecao.
  int fim; // Índice de fim do vetor que lançou a excecao.
};

//Lançada quando 'indice' não pertence a [inicio, fim].
struct IndiceInvalido {
  int inicio; // Índice de início do vetor que lançou a excecao.
  int fim; // Índice de fim do vetor que lançou a excecao.
  int indice; // Índice inválido.
};

// Lançada quando o valor de 'indice' é solicitado e o mesmo não foi previamente
// inicializado.
struct IndiceNaoInicializado {
  int indice; // Índice do vetor que não foi inicializado.
};

Cada uma das precondições indicadas na definição da classe corresponde a uma dessas exceções.

A função main já está quase toda implementada, você deve *apenas* acrescentar mais três blocos catch, i.e. um bloco para cada uma das exceções listadas acima.

O tratamento consiste em exibir uma mensagem de erro, e *continuar* a execução do programa. As mensagens de erro para cada exceção são as seguintes:


IntervaloVazio:

cout << "Não foi possível executar a operação: intervalo [" << e.inicio << ", " << e.fim << "] é vazio." << endl;

IndiceNaoInicializado:

cout << "Não foi possível executar a operação: índice " << e.indice << " não foi inicializado." << endl;

IndiceInvalido:

cout << "Não foi possível executar a operação: índice " << e.indice << " não pertence ao intervalo [" << e.inicio << ", " << e.fim << "]." << endl;

No código acima, a variável  e  é contém os dados da respectiva exceção que foi lançada. 
