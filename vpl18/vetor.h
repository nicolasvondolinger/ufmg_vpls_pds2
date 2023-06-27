#ifndef VETOR_H_
#define VETOR_H_

#include <iostream> 
using namespace std;


#include <string>

using std::string;

// Define um vetor cujos índices variam em
// qualquer intervalo, inclusive negativos.

template <class Tipo>
class Vetor{
  public:
    Vetor(int inicio, int fim);
    void Redimensionar(int inicio2, int fim2);
    Tipo& operator[](int i);
    ~Vetor();
  
  private:
    int inicio_;
    int fim_;
    Tipo* elementos_;
};


    template <class Tipo>
    Vetor<Tipo>::Vetor(int inicio, int fim) : inicio_(inicio), fim_(fim) {
      elementos_ = new Tipo[fim - inicio + 1];
    }

    // Redimensiona o vetor de forma que os índices passam a variar
    // de 'inicio2' até 'fim2'.
    // O valor associado aos índices que estão na interseção de
    // [inicio_, fim_] e [inicio2, fim2], não se alteram.
    // Já o valor dos demais índices é indefinido.  
    // PRECONDIÇÃO: fim2 >= inicio2.
    template <class Tipo>
    void Vetor<Tipo>::Redimensionar(int inicio2, int fim2) {
      int tamanho = fim2 - inicio2 + 1;
      Tipo* novosElementos = new Tipo[tamanho];

      // Copia os valores dos índices que estão na interseção dos intervalos
      int inicioIntersecao = std::max(inicio_, inicio2);
      int fimIntersecao = std::min(fim_, fim2);
      int deslocamento = inicioIntersecao - inicio2;
      for (int i = inicioIntersecao; i <= fimIntersecao; i++) {
        novosElementos[i - inicio2] = elementos_[i - inicio_];
      }

      // Define o valor padrão para os novos índices
      for (int i = inicioIntersecao; i < inicio2; i++) {
        novosElementos[i - inicio2] = Tipo();
      }
      for (int i = fimIntersecao + 1; i <= fim2; i++) {
        novosElementos[i - inicio2] = Tipo();
      }

      // Desaloca a memória dos elementos antigos
      delete[] elementos_;

      // Atualiza os ponteiros e os limites do vetor
      elementos_ = novosElementos;
      inicio_ = inicio2;
      fim_ = fim2;
    }

    // Retorna uma referência a variável correspondente ao índice i.
    // Pode ser utilizado tanto para atribuir quanto para acessar valores.
    // PRECONDIÇÃO: i está dentro do intervalo de índices do vetor.
    template <class Tipo>
    Tipo& Vetor<Tipo>::operator[](int i) { 
      //TODO: Renomear para 'operator[ ]' e implementar. 
      return elementos_[i - inicio_];
    }

    // Desaloca a memória reservada para os elementos do vetor.
    template <class Tipo>
    Vetor<Tipo>::~Vetor() {
      delete [] elementos_;
    }

#endif