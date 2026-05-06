#include <iostream>
#include <string>
using namespace std;

class purchase {
private:
    int qty;
    float price;
    string itemname;
    float total;

public:
    purchase(string name = "", int quantity = 0, float p = 0.0);
    void set_data(string name, int quantity, float p);
    void calculate();
    void print();

    // ADD THESE
    float getTotal();
    int getQty();
    void printTotal(int totalItems, float grandTotal);
};

purchase::purchase(string name, int quantity,float p)
{
    itemname = name;
    qty = quantity;
    price = p;
    total = 0;
}

void purchase::set_data(string name, int quantity, float p)
{
    itemname = name;
    qty = quantity;
    price = p;
}

void purchase::calculate()
{
    total = qty * price;
}

void purchase::print()
{
   cout << "\n========== RECEIPT ==========\n";
   cout << "Item : " << itemname << endl;
   cout << "Quantity : " << qty << endl;
   cout << "Price : " << price << endl;
   cout << "Total : " << total << endl;
}

// ADD THESE FUNCTIONS
float purchase::getTotal() {
    return total;
}

int purchase::getQty() {
    return qty;
}

void purchase::printTotal(int totalItems, float grandTotal)
{
    cout << "\n========== GRAND TOTAL ==========\n";
    cout << "Total Items : " << totalItems << endl;
    cout << "Total Amount : " << grandTotal << endl;
}

int main(){
    purchase p1;

    string name;
    int quantity;
    float price;

    float grandTotal = 0;
    int totalItems = 0;

    while (true) {
        cout << "\nEnter item name (Q to quit): ";
        getline(cin, name);

        if (name == "Q" || name == "q") {
            break;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter price: ";
        cin >> price;

        cin.ignore(); 

        p1.set_data(name, quantity, price);
        p1.calculate();
        p1.print();

        grandTotal += p1.getTotal();
        totalItems += p1.getQty();
    }
    
    p1.printTotal(totalItems, grandTotal);

    return 0;
}
