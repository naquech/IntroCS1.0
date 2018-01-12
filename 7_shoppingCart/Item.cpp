//Item class function implementation

#include "Item.hpp"
//#include <string>

Item::Item(){
    setName("");
    setPrice(0.0);
    setQuantity(0);
}


Item::Item(std::string nameIn, double priceIn, int quntIn){
    setName(nameIn);
    setPrice(priceIn);
    setQuantity(quntIn);
}

void Item::setName(std::string nameIn){
    name = nameIn;
}

void Item::setPrice(double priceIn){
    price = priceIn;
}

void Item::setQuantity(int quntIn){
    quantity = quntIn;
}

std::string Item::getName(){
    return name;
}

double Item::getPrice(){
    return price;
}

int Item::getQuantity(){
    return quantity;
}
