//
// Created by pabli on 19/6/2022.
//

#include "Burger.h"

Burger::Burger() {
    price = 3;
}

Burger::~Burger() {

}

double Burger::getPrice() const {
    return price;
}

void Burger::setPrice(double price) {
    Burger::price = price;
}

std::ostream &operator<<(std::ostream &os, const Burger &burger) {
    os << " price: " << burger.price;
    return os;
}

double Burger::totalPrice(double tax) const {
    return price + price * tax;
}
