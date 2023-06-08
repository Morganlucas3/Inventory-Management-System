//
//  item.h
//  ASSIGNMENT 2
//
//  Created by Morgan Lucas on 10/23/20.
//

#ifndef item_h
#define item_h
#include <iostream>
#include <string>
using namespace std;

class Item
{
    
    
private:
    string product;
    double ID;
    double value;
    double quantity;
   
public:
  void initItem(int num)
    {
        cout << "Enter item " << num << " to add to your inventory." << endl;
        cout << "Please enter the product name." << endl;
        cin >> product;
        cout << "Enter the manufacturer's id." << endl;
        cin >> ID;
        cout << "Enter the retail value" << endl;
        cin >> value;
        cout << "Enter quantity available" << endl;
        cin >> quantity;
    }
 
void printStock()
    {
        cout << quantity << " " << product << " left in stock at " << value << " item id " << ID << endl;
    }
   
void Menu(int i)
    {
       cout << i << ". " << quantity << " " << product << " left in stock at " << value << " item id " << ID << endl;
    }

void Sold()
    {
        int amt;
    cout << "How many would you like to buy?" << endl;
    cin >> amt;
    cout << "SOLD " << amt << " " << product << " for" << " " << (value * amt) << endl;
        quantity = quantity - amt;
        
    }

void Sale()
    {
        double disc;
        cout << "Price for " << product << " on sale for " << (value * disc) << endl;
        
    }
    
};



#endif /* item_h */
