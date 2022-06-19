//
// Created by pabli on 19/6/2022.
//

#ifndef LAB01_INHERITANCE_BURGER_H
#define LAB01_INHERITANCE_BURGER_H

#include <ostream>
#include "IFood.h"

class Burger : public IFood{
private:
    double price;
public:
    Burger();

    virtual ~Burger();

    double getPrice() const;

    void setPrice(double price);

    double totalPrice(double tax) const override;

    friend std::ostream &operator<<(std::ostream &os, const Burger &burger);
};


#endif //LAB01_INHERITANCE_BURGER_H
