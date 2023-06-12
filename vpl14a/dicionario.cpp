#include "dicionario.h"
#include <list>
#include <string>

using std::list;
using std::string;

Dicionario::Dicionario(){

}

int Dicionario::tamanho(){
    int a = 0;
    for(auto element : elementos_) a++;
    return a;
}

bool Dicionario::pertence(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) return true;
    }
    /*for(auto element : elementos_){
        if (element.chave == chave) return true;
    }*/
    return false;
}

string Dicionario::menor(){
    string menorChave = elementos_.front().chave;
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave < menorChave) menorChave = it -> chave;
    }
    /*for (auto element : elementos_) {
        if (element.chave < menorChave) menorChave = element.chave;
    }*/

    return menorChave;
}

string Dicionario::valor(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) return it -> chave;
    }
    /*for(auto element : elementos_){
        if (element.chave == chave) return element.valor;
    }*/
}

void Dicionario::Inserir(string chave, string valor){
    Elemento toInsert;
    toInsert.chave = chave;
    toInsert.valor = valor;
    elementos_.push_back(toInsert);
}

void Dicionario::Remover(string chave){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) {
            elementos_.erase(it);
            break;
        }
    }
    /*for(auto element : elementos_){
        if(element.chave == chave) elementos_.erase(element);
    }*/
}

void Dicionario::Alterar(string chave, string valor){
    for(auto it = elementos_.begin(); it != elementos_.end(); it++){
        if(it -> chave == chave) it -> valor = valor;
    }
    /*for(auto element : elementos_){
        if(element.chave == chave) element.valor = valor;
    }*/
}

Dicionario::~Dicionario(){
    elementos_.clear();
}