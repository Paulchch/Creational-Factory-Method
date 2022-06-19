//
// Created by pabli on 19/6/2022.
//

#ifndef LAB01_INHERITANCE_FACTORY_H
#define LAB01_INHERITANCE_FACTORY_H
#include "IFoodFactory.h"
#include "Burger.h"
#include "Taco.h"

class Factory : public IFoodFactory{
public:
    Factory();

    IFood *createFood(std::string foodName) const override;

    virtual ~Factory() = default;
};


#endif //LAB01_INHERITANCE_FACTORY_H
