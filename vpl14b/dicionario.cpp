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

// Retorna a *menor* chave do dicionário.
// Pré-condição: o dicionário não está vazio.
string Dicionario::menor(){
    if(tamanho() == 0){
        DicionarioVazio z;
        throw z;
    }
    string menorChave = elementos_.front().chave;
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave < menorChave) menorChave = it -> chave;
    }

    return menorChave;
}

// Retorna o valor associado a chave.
// Pré-condição: a chave *necessariamente* está no dicionário.
string Dicionario::valor(string chave){
    if(!pertence(chave)){
        ChaveNaoExistente k;
        k.chave = chave; 
        throw k;
    }
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) return it -> valor;
    }
}

// Insere um par chave/valor no dicionário.
// Pré-condição: a chave *não* está no dicionário.
void Dicionario::Inserir(string chave, string valor){
    if(pertence(chave)){
        ChaveExistente e;
        e.chave = chave;
        throw e;
    }
    Elemento toInsert{chave, valor};
    elementos_.push_back(toInsert);
}

// Remove um par chave/valor do dicionário.
// Pré-condição: a chave *necessariamente* está no dicionário.
void Dicionario::Remover(string chave){
    if(!pertence(chave)){
        ChaveNaoExistente k;
        k.chave = chave;
        throw k;
    }
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) {
            elementos_.erase(it);
            break;
        }
    }
}

// Altera o valor associado a uma chave do dicionário.
// Pré-condição: a chave *necessariamente* está no dicionário.
void Dicionario::Alterar(string chave, string valor){
    if(!pertence(chave)){
        ChaveNaoExistente k;
        k.chave = chave;
        throw k;
    }
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) it -> valor = valor;
    }
}

Dicionario::~Dicionario(){
    elementos_.clear();
}