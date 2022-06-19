//
// Created by pabli on 19/6/2022.
//

#ifndef LAB01_INHERITANCE_IFOOD_H
#define LAB01_INHERITANCE_IFOOD_H
#include<iostream>

/**
 * Food Interface declares totalPrice method that concrete classes have to implement
 */

class IFood {
public:
    virtual double totalPrice(double tax) const = 0;

    virtual ~IFood() = default;
};


#endif //LAB01_INHERITANCE_IFOOD_H
