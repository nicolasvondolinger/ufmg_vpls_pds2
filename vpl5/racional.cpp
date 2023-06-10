#include "racional.h"

#include <cmath>
#include <iostream>
#include <numeric>

void Racional::Simplificar() {
  int mdc = std::gcd(numerador_, denominador_);
  numerador_ /= mdc;
  denominador_ /= mdc;
}

Racional::Racional() : numerador_(0), denominador_(1) {
}

Racional::Racional(int n)  : numerador_(n), denominador_(1) {
}

Racional::Racional(int n, int d) {
  if(d != 0){
    numerador_ = n;
    denominador_ = d;
    Simplificar();
  }
}

int Racional::numerador() const {
  return numerador_;
}

int Racional::denominador() const {
  return denominador_;
}

Racional Racional::simetrico() const {
  return Racional(-numerador_, denominador_);
}

Racional Racional::somar(Racional k) const {
  return Racional(numerador_ * k.denominador() + denominador_ * k.numerador(), denominador_ * k.denominador());
}

Racional Racional::subtrair(Racional k) const {
  return Racional(numerador_ * k.denominador() - denominador_ * k.numerador(), denominador_ * k.denominador());
}

Racional Racional::multiplicar(Racional k) const {
  return Racional(numerador_ * k.numerador(), denominador_ * k.denominador());
}

Racional Racional::dividir(Racional k) const {
  return Racional(numerador_ * k.denominador(), denominador_ * k.numerador());

}

