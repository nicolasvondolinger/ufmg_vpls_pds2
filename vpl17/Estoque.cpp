#include <string>

#include "Estoque.hpp"

void Estoque::add_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  // TODO
  if(estoque_.find(mercadoria) != estoque_.end()){
    estoque_.insert({mercadoria, qtd});
  } else{
    estoque_[mercadoria] += qtd;
  }
}

void Estoque::sub_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  // TODO
  if(estoque_.find(mercadoria) == estoque_.end()){
    cout << mercadoria << " inexistente" << endl;
  } else if (estoque_[mercadoria] < qtd){
    cout << mercadoria << " insuficiente" << endl;
  } else{
    estoque_[mercadoria] -= qtd;
  }
}

unsigned int Estoque::get_qtd(const std::string& mercadoria) const {
  // TODO
  auto it = estoque_.find(mercadoria);
  if(it != estoque_.end()) return it -> second;
  return 0;
}

void Estoque::imprime_estoque() const {
  // TODO
}

Estoque& Estoque::operator += (const Estoque& rhs) {
  // TODO
  return *this;
}

Estoque& Estoque::operator -= (const Estoque& rhs) {
  // TODO
  return *this;
}

bool operator < (Estoque& lhs, Estoque& rhs) {
  // TODO
  return false;
}

bool operator > (Estoque& lhs, Estoque& rhs) {
  // TODO
  return false;
}