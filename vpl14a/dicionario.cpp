#include "dicionario.h"
#include <list>
#include <string>

using std::list;
using std::string;

Dicionario::Dicionario(){}

int Dicionario::tamanho(){
    int a = 0;
    for(auto it = elementos_.begin(); it != elementos_.end(); it++) a++;
    return a;
}

bool Dicionario::pertence(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) return true;
    }

    return false;
}

string Dicionario::menor(){
    string menorChave = elementos_.front().chave;
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave < menorChave) menorChave = it -> chave;
    }

    return menorChave;
}

string Dicionario::valor(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) return it -> valor;
    }
}

void Dicionario::Inserir(string chave, string valor){
    Elemento toInsert{chave, valor};
    elementos_.push_back(toInsert);
}

void Dicionario::Remover(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) {
            elementos_.erase(it);
            break;
        }
    }
}

void Dicionario::Alterar(string chave, string valor){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) it -> valor = valor;
    }
}

Dicionario::~Dicionario(){
    elementos_.clear();
}