#include "racional.h"
#include <numeric>

Racional::Racional() : numerador_(0), denominador_(1){}

Racional::Racional(int n) : numerador_(n), denominador_(1){}

Racional::Racional(int n, int d){
    if(d != 0){
        if(d < 0){
            numerador_ = -n;
            denominador_ = -d;
            Simplificar();
        } else {
            numerador_ = n;
            denominador_ = d;
            Simplificar();
        }
    }
}

int Racional::numerador()const{
    return numerador_;
}

int Racional::denominador()const{
    return denominador_;
}

void Racional::Simplificar(){
    int mdc = std::gcd(numerador_, denominador_);
    numerador_ /= mdc;
    denominador_ /= mdc;
}

Racional Racional::operator-() const{
    return Racional(-numerador_, denominador_);
}


Racional Racional::operator+(Racional k) const{
    return Racional(numerador_ * k.denominador() + denominador_ * k.numerador(), denominador_ * k.denominador());
}

Racional Racional::operator-(Racional k) const{
    return (*this) + (-k);
}

Racional Racional::operator*(Racional k) const{
    return Racional(numerador_ * k.numerador(), denominador_ * k.denominador());
}

Racional Racional::operator/(Racional k) const{
    return Racional(numerador_ * k.denominador(), denominador_ * k.numerador());
}

Racional::operator float()const{
    
    return static_cast<float>(numerador_)/static_cast<float>(denominador_);
}

Racional::operator string()const{
    return std::to_string(numerador_) + "/" + std::to_string(denominador_);
}

ostream& operator<<(ostream& out, Racional r){
    out << r.numerador_ << "/" << r.denominador_;
    return out;
}

istream& operator>>(istream& in, Racional& r){
    int num, den;
    in >> num >> den;
    r = Racional(num, den);
    return in;
}
