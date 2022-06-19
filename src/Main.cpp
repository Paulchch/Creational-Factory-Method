#include<iostream>
#include "IFoodFactory.h"
#include "Factory.h"

int main(){
    const double TAX = 0.13; //Our tax will be 13%
    std::cout<<"Welcome to our restaurant"<<std::endl;

    IFoodFactory* foodFactory = new Factory(); //The factory

    IFood* burger;
    IFood* taco;

    burger = foodFactory->createFood("BURGER");
    taco = foodFactory->createFood("TACO");

    std::cout<<"Burger total price is: "<<burger->totalPrice(TAX)<<" dollars"<<std::endl;
    std::cout<<"Taco total price is: "<<taco->totalPrice(TAX)<<" dollars"<<std::endl;

}
