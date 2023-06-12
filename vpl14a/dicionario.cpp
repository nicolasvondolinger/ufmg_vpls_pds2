#include "dicionario.h"

int Dicionario::tamanho(){
    int a = 0;
    for(auto it = elementos_.begin(); it != elementos_.end(); it++) a++;
    return a;
}

bool Dicionario::pertence(string chave){
    for(auto it : elementos_){
        if (it.chave == chave) return true;
    }
    return false;
}

string Dicionario::menor(){

}

string Dicionario::valor(string chave){
    for(auto it : elementos_){
        if (it.chave == chave) return it.valor;
    }
}

void Dicionario::Inserir(string chave, string valor){
    Elemento toInsert;
    toInsert.chave = chave;
    toInsert.valor = valor;
    elementos_.push_back(toInsert);
}

void Dicionario::Remover(string chave){
    for(auto element : elementos_){
        if(element.chave == chave) elementos_.remove(element);
    }
}

void Dicionario::Alterar(string chave, string valor){
    for(auto element : elementos_){
        if(element.chave == chave) element.valor = valor;
    }
}