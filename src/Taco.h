//
// Created by pabli on 19/6/2022.
//

#ifndef LAB01_INHERITANCE_TACO_H
#define LAB01_INHERITANCE_TACO_H
#include "IFood.h"
#include <ostream>

class Taco : public IFood{
private:
    double price;
public:
    Taco();

    virtual ~Taco();

    double getPrice() const;

    void setPrice(double price);

    double totalPrice(double basePrice) const override;

    friend std::ostream &operator<<(std::ostream &os, const Taco &taco);
};


#endif //LAB01_INHERITANCE_TACO_H
