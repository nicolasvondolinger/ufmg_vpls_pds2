Implemente no arquivo vetor.cpp o TAD Vetor, que está definido no arquivo vetor.h.
Este TAD é uma versão simplificada do vector de c++.
Neste caso, o Vetor terá sempre elementos do tipo std::string.
Outra diferença significativa é que os índices de um Vetor podem ser definidos como qualquer intervalo de números inteiros.
Por exemplo, a instrução:

Vetor<int> v(-10, 10);

cria um arranjo com *21* elementos, cujos índices variam de -10 até 10. O programador pode acessar os elementos deste arranjo através de dois métodos atribuir() e valor(). Por exemplo:

Vetor<int> v(-10, 10);
for (int i = -10; i <= 10; i++) {
  v.atribuir(i, i * i);
  cout << a.valor(i) << endl;
}

Antes de mais nada, abra o arquivo vetor.h na sua IDE de programação e entenda a especificação de todos os métodos do TAD. Atente-se, principalmente, a quais são as pré-condições de cada método da classe Vetor.
