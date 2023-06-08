//  Created by Morgan Lucas on 10/23/20.
//  Assignment 2- Inventory Management System
// (simulates an inventory management system for a shop)

#include <iostream>
#include "item.h" //including the header file
using namespace std;

//prototypes
void initArray(Item arr[4]);
void printArray(Item arr[4]);
void printMenu(Item arr[4]);
void printSold(Item arr[4]);
void printSale(Item arr[4]);

int main(int argc, const char * argv[]) {
    Item arr[4]; //array

    //output for the intro
    cout << "===Welcome to the inventory helper===" << endl;
    cout << "-store hours will begin shortly-" << endl;
    cout << "Please update your inventory..." << endl;
    cout << endl;
    
    initArray(arr); //saves user input in array
    cout << endl;
    printArray(arr); // prints stock after user input complete
    
    char choice;
    cout << "Business hours are now open" << endl;
    cout << "Woud you like to perform a transaction?" << endl;
    cout << "(y/n)" << endl;
    cin >> choice;
    int count = 0;
    
    while (choice == 'y') //loops through transactions
     {
        
         cout << "====Menu====" << endl;
         cout << "Enter which item you would like to purchase" << endl;
         printMenu(arr);
         int num;
         cin >> num;
         arr[num-1].Sold();
         cout << "Would you like to perform another transaction? (y/n)" << endl;
         cin >> choice;
         count++;
    
         if (count == 2)
         {
             printSale(arr); //user adds discount to prices after two items are sold
         }
         
     }
 
    
    cout << "Closing Shop -- inventory left" << endl; //closes shop after user is finished and prints remaining stock
    printArray(arr);
    
   
  
    
    return 0;
}

//saves items to array
void initArray(Item arr[4])
{
    
    for(int i=0; i < 4; i++)
    {
        arr[i].initItem(i+1); //from item.h-saves user input 
    }
    
}

void printArray(Item arr[4])
{
    for (int i=0; i < 4; i++)
    {
        arr[i].printStock(); //from item.h- prints stock
    }
    
}

void printMenu(Item arr[4]) //prints menu and stock
{
    for (int i=0; i < 4; i++)
    {
        arr[i].Menu(i+1); //updates menu/stock after user buys items
    }
    
}

void printSale(Item arr[4]) //discount function
{
    char choice;
    cout << "2 items sold!" << endl;
    cout << "Sale starting!" << endl;
    cout << "Would you like to enter a discount % ?" << endl;
    cout << "(y/n)" << endl;
    cin >> choice;
    double disc;
    cout << "Enter the custom discount percentage." << endl;
    cin >> disc;
    
    for (int i=0; i < 4; i++)
    {
        arr[i].Sale(); //from item.h-changes prices to updated discounted amount
    }
    
}

