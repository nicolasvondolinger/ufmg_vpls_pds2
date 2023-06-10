#include "fila_de_prioridade.h"

#include <list>
#include <string>
#include <vector>

using std::string;
using std::vector;

void FilaDePrioridade::Adicionar(Pessoa p) {
  lista_.push_back(p);
}

string FilaDePrioridade::RemoverMaiorPrioridade() {
  lista_.erase(0);
  string nome = lista_.begin().nome;
  return nome;
}

void FilaDePrioridade::Remover(string nome) {
  for (auto it = lista_.begin(); it != begin.end(); it++){
    if ((*it).nome == nome){
      lista_.remove((*it));
      //lista_.clear(it);
    }
  }
}

int FilaDePrioridade::tamanho(){
  return lista_.size();
}

vector<string> FilaDePrioridade::listar() {
  vector<string> v;
  int position = 0;
  for (auto it = lista_.begin(); it != begin.end(); it++){
    v[position] = (*it).nome;
    position++; 
  }
  return v; 
}