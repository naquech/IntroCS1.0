/*Natalia Q. CS_161
Write a main method (in ShopCart.cpp) that displays a menu with the following options (it should loop until the user selects Quit):
Add item: this allows the user to enter the information for a new Item, which is then added to the cart.
List contents: this lists the name, price and quantity for all Items in the cart. All prices should be displayed with two decimal 
places.
Total price: this displays the total cost of all Items in the cart (with two decimal places) - no sales tax.
Quit: exits the program.
Input validation: Verify that the user enters a valid double for price and a valid int for quantity. If an input isn't valid, 
prompt the user to try again.
*/

#include "ShopCart.hpp"
#include "Item.cpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


void ShopCart::addItem(string nameIn, double priceIn, int quntIn){
    
    Item newItem;
    
    newItem.setName(nameIn);
    newItem.setPrice(priceIn);
    newItem.setQuantity(quntIn);
    
    cartItem.push_back(newItem);
}


void ShopCart::listContents(){

    if (cartItem.empty()){
        cout << "Your cart is empty" << endl;
    }
     else{
         cout << endl << "--Cart Contents--" << endl;
            cout << fixed << showpoint << setprecision(1);
            cout << "Name" << setw(10) << "Price" << setw(10) << "Quantity" << endl;
        for (int i = 0; i<cartItem.size(); i++){
            cout << setw(1) << cartItem.at(i).getName() << setw(10) << cartItem.at(i).getPrice() << setw(10) << cartItem.at(i).getQuantity() << endl;
        }
     }
}


double ShopCart::totalPrice(){
    
    double totalCart;
    double totalItem;
    
    if (cartItem.empty()){
        cout << "Your cart is empty" << endl;
    }
    else{
        for (int i = 0; i<cartItem.size(); i++){
            totalItem = cartItem.at(i).getQuantity() * cartItem.at(i).getPrice();
            totalCart += totalItem;
        }
        cout << "Your total is: " << totalCart << endl;
    }
}



int main(){
    
    int option;
    string nameIn;
    double priceIn;
    int quntIn;
    
    ShopCart cart;
    
    do{
        cout << endl;
        cout << "--- MENU ---" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. List Contents" << endl;
        cout << "3. Total Price" << endl;
        cout << "4. Quit" << endl;
        cout << "Please enter an option: ";
        cin >> option;
    
        if (option != 4){
            switch (option) {
                case 1:
                    cout << "Name: ";
                    cin >> nameIn;
                    
                    cout << "Price: ";
                    while (! (cin >> priceIn))
                    {
                       cin.clear();
                       cin.ignore(100,'\n');
                       cout << "Please enter a valid number (0.0): ";
                    }
                    cout << "Quantity: ";
                    while (! (cin >> quntIn))
                    {
                       cin.clear();
                       cin.ignore(100,'\n');
                       cout << "Please enter a valid number integer: ";
                    }
                    cart.addItem(nameIn, priceIn, quntIn);
                    break;
                case 2:
                    cart.listContents();
                    break;
                case 3:
                    cart.totalPrice();
                    break;
            }
        }
        
    } while (option !=4);
    
    return 0;
}