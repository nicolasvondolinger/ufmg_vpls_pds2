#include <string>

#include "Estoque.hpp"

void Estoque::add_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  // TODO
  auto it = estoque_.find(mercadoria);
  if(it != estoque_.end()){
    it -> second += qtd;
  } else{
    estoque_.insert({mercadoria, qtd});
  }
}

void Estoque::sub_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  // TODO
  auto it = estoque_.find(mercadoria);
  if(it == estoque_.end()){
    cout << mercadoria << " inexistente" << endl;
  } else if (it -> second < qtd){
    cout << mercadoria << " insuficiente" << endl;
  } else{
    it -> second -= qtd;
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
  for(auto it = estoque_.begin(); it != estoque_.end(); it++){
    cout << it -> first << ", " << it -> second << endl;
  }
}

Estoque& Estoque::operator += (const Estoque& rhs) {
  // TODO
  for (auto it = rhs.estoque_.begin(); it != rhs.estoque_.end(); ++it) {
    const std::string& mercadoria = it->first;
    int quantidade = it->second;
    add_mercadoria(mercadoria, quantidade);
  }
  return *this;
}

Estoque& Estoque::operator -= (const Estoque& rhs) {
  // TODO
  for (auto it = rhs.estoque_.begin(); it != rhs.estoque_.end(); ++it) {
    const std::string& mercadoria = it->first;
    int quantidade = it->second;
    sub_mercadoria(mercadoria, quantidade);
  }
  return *this;
}

bool operator < (Estoque& lhs, Estoque& rhs) {
  // TODO
  for(auto it = lhs.estoque_.begin(); it != lhs.estoque_.end(); it++) {
      if (rhs.estoque_.find(it->first) == rhs.estoque_.end() || 
          it->second >= rhs.estoque_.find(it->first)->second) {
        return false;
      }
    }
  return true;
}

bool operator > (Estoque& lhs, Estoque& rhs) {
  // TODO
  for(auto it = rhs.estoque_.begin(); it != rhs.estoque_.end(); it++) {
      if (lhs.estoque_.find(it->first) == lhs.estoque_.end() || 
          it->second >= lhs.estoque_.find(it->first)->second) {
        return false;
      }
    }
  return true;
}