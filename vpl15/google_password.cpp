#include "google_password.h"

#include <iostream>

using namespace std;

// insere uma nova senha associado a um determinado site
void GooglePassword::insert(const std::string& url,
                            const std::string& login,
                            const std::string& password) {
  // TODO: Implemente este metodo
  if(validPassword(password)){
    Usuario newUser{login, password};
    passwords_.insert({url, newUser});
  }
}

//remove as informações associadas a um site
void GooglePassword::remove(const std::string& url) {
  // TODO: Implemente este metodo
  for(auto it = passwords_.begin(); it != passwords_.end(); it++){
    if(it -> first == url){
      passwords_.erase(it);
    }
  }
}

//atualiza as credenciais utilizadas em um site
void GooglePassword::update(const std::string& url,
                            const std::string& login,
                            const std::string& old_password,
                            const std::string& new_password) {
  // TODO: Implemente este metodo
  /**
   * Este metodo nao pode inserir novas credenciais, apenas atualizar as
   * ja existentes. Alem disso, o login e/ou senha do usuario so podem ser
   * atualizados se a senha armazenada no sistema for igual a old_password.
   * Nao esqueca de verificar se o novo password tam//imprime as informações salvas em ordem alfabética, utilizando os sites como critério de ordembem e valido.
   */
  for(auto it = passwords_.begin(); it != passwords_.end(); it++){
    if(it -> first == url){
      if(it -> second.password == old_password){
        if(validPassword(new_password)){
          it -> second.login = login;
          it -> second.password = new_password;
        }
      }
    }
  }
}

//imprime as informações salvas em ordem alfabética, utilizando os sites como critério de ordem
void GooglePassword::printPasswords() {
  // TODO: Implemente este metodo
  /**
   * Exemplo de saida:
   * 3
   * aaa.site.com: login and password
   * www.site.com: login and password
   * zzz.site.com: login and password
   *
   */

  int aux = 0;
  for(auto it = passwords_.begin(); it != passwords_.end(); it++) aux++;
  cout << aux << endl;
  for(auto it = passwords_.begin(); it != passwords_.end(); it++){
    cout << it -> first << ": " << it -> second.login << " and " << it -> second.password << endl;
  }
}

// verifica se o password passa em todas as restricoes
bool GooglePassword::validPassword(const std::string& password) const {
  // TODO: Implemente este metodo
  if(password == "123456" || password.length() > 50 || password.length() < 6) return false;

  if(password.find("123456") != string::npos) return false;

  for(int i = 0; i < password.length(); i ++) if(password[i] == ' ') return false; 

  return true;
}

