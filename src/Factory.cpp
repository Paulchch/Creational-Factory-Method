//
// Created by pabli on 19/6/2022.
//

#include "Factory.h"

Factory::Factory() {

}

IFood *Factory::createFood(std::string foodName) const {
    if(foodName == "BURGER"){
        return new Burger;
    }
    else if(foodName == "TACO"){
        return new Taco;
    }
    return nullptr;
}


