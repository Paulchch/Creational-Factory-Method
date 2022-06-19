//
// Created by pabli on 19/6/2022.
//

#include "Taco.h"

Taco::Taco() {
    price = 1;
}

Taco::~Taco() {

}

double Taco::getPrice() const {
    return price;
}

void Taco::setPrice(double price) {
    Taco::price = price;
}

std::ostream &operator<<(std::ostream &os, const Taco &taco) {
    os << "price: " << taco.price;
    return os;
}

double Taco::totalPrice(double tax) const {
    return price + price * tax;
}
