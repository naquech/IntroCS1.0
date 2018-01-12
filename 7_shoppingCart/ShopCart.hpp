//ShopCart specification file
#ifndef SHOPCART_HPP
#define SHOPCART_HPP

#include "Item.hpp"
#include <vector>

class ShopCart{

    private:
        Item item; 
        std::vector<Item> cartItem;
    
    public:
        void addItem(std::string, double, int);
        void listContents();
        double totalPrice();
    
};

#endif