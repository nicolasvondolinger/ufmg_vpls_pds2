Neste exercício, você deverá implementar um sistema de estoque de mercadorias. Um estoque é essencialmente uma tabela que associa nomes de mercadorias (std::string) a quantidades (unsigned int). O estoque deve implementar o seguinte Tipo Abstrato de Dados:

class Estoque {
  public:
    void add_mercadoria(const std::string& s, unsigned int qtd);
    unsigned int get_qtd(const std::string& s) const;
    void sub_mercadoria(const std::string& s, unsigned int qtd);
    void imprime_estoque() const;
    Estoque& operator += (const Estoque& rhs);
    Estoque& operator -= (const Estoque& rhs);
    friend bool operator < (Estoque& e0, Estoque& e1);
    friend bool operator > (Estoque& e0, Estoque& e1);
};

Cada uma dessas operações está detalhada no arquivo Estoque.hpp, que faz parte deste trabalho. Há alguns testes no arquivo main.cpp que você também pode usar para entender qual é a semântica de cada uma dessas operações. Note que o papel de um teste de software é não somente verificar se uma funcionalidade está corretamente implementada, mas também documentar o que esta funcionalidade faz. Por exemplo, considere o teste abaixo, presente no arquivo main.cpp:

void test2() {
  Estoque e0;
  e0.add_mercadoria("trigo", 30);
  e0.sub_mercadoria("trigo", 29);
  e0.add_mercadoria("trigo", 9);
  if (e0.get_qtd("trigo") != 10) {
    std::cout << "Erro: quantidade invalida de trigo\n";
  } else {
    std::cout << "Teste 2 passou.\n";
  }
}

Mesmo sem ler a descrição dos métodos add_mercadoria, sub_mercadoria e get_qtd, simplesmente lendo a condição que o teste verifica, o programador já vai ter uma ideia do que faz cada um desses métodos. As operações de comparação requerem atenção especial, pois suas semânticas podem não ser intuitivas. Além dos comentários no arquivo Estoque.hpp, a figura abaixo contém uma documentação (gráfica) sobre como essas operações funcionam.
