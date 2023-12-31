#include "vetor.h"

#include <list>
#include <string>
#include <vector>

using std::list;
using std::string;
using std::vector;

Vetor::Vetor(int inicio, int fim){
  
    inicio_ = inicio;
    elementos_ = new std::string[fim - inicio + 1];
} 

void Vetor::atribuir(int i, string valor){
  
    elementos_[i - inicio_] = valor;

}

string Vetor::valor(int i) const{
  
    return elementos_[i - inicio_];

}

Vetor::~Vetor(){
  delete[] elementos_;
}