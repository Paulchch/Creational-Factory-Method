//
// Created by pabli on 19/6/2022.
//

#ifndef LAB01_INHERITANCE_IFOODFACTORY_H
#define LAB01_INHERITANCE_IFOODFACTORY_H
#include"IFood.h"

class IFoodFactory {
public:
    virtual IFood* createFood(std::string foodName) const = 0;

    virtual ~IFoodFactory() = default;
};


#endif //LAB01_INHERITANCE_IFOODFACTORY_H
