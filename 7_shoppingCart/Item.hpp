//Item class specification file

#ifndef ITEM_HPP
#define ITEM_HPP

#include<string>

class Item {

private:
    std::string name;
    double price;
    int quantity;
            
public:
    Item();
    Item(std::string, double, int);
    void setName(std::string);
    void setPrice(double);
    void setQuantity(int);
    std::string getName();
    double getPrice();
    int getQuantity();
        
};

#endif
