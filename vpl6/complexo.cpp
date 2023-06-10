// Copyright 2022 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

Complexo::Complexo() : modulo_(0), argumento_(0){
}

Complexo::Complexo(double a, double b) : modulo_(a), argumento_(b){
}

double Complexo::real() {
  return modulo_;
}

double Complexo::imag() {
  return argumento_;
}

bool Complexo::igual(Complexo x) {
  if(modulo_ == x.real() && argumento_ == x.imag()){
    return true;
  } else return false;
}

void Complexo::Atribuir(Complexo x) {
  modulo_ = x.real();
  argumento_ = x.imag();
}

double Complexo::modulo() {
  double n1 = modulo_ * modulo_;
  double n2 = argumento_ * argumento_;
  double total = sqrt(n1 + n2);
  return total;
}

Complexo Complexo::conjugado() {
  Complexo c(modulo_, -argumento_);
  return c;
}

Complexo Complexo::simetrico() {
  Complexo c(-modulo_, -argumento_);
  return c;
}

Complexo Complexo::inverso() {
  Complexo i(1/modulo_, 1/argumento_);
  return i;
}

Complexo Complexo::somar(Complexo y) {
  Complexo s(modulo_ + y.real(), argumento_ + y.imag());
  return s;
}

Complexo Complexo::subtrair(Complexo y) {
  Complexo s(modulo_ - y.real(), argumento_ - y.imag());
  return s;
}

Complexo Complexo::multiplicar(Complexo y){
  Complexo p(modulo_ * y.real(), argumento_ + y.imag());
  return p;
}

Complexo Complexo::dividir(Complexo y) {
  Complexo d(modulo_/y.real(), argumento_-y.imag());
  return d;
}
