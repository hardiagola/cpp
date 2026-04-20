#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Item
{
    char name[50];
    int quantity;
    double price;
public:
    void addItem();
    void viewAllItems();
    void searchItem();
};

const char* FILE_NAME = "inventory.txt";

void Item::addItem()
{
    ofstream file(FILE_NAME, ios::app);
    if (!file)
    {
        cout << "Error opening file!\n";
        return;
    }

    Item item;
    cout << "Enter Item Name (no spaces): ";
    cin >> item.name;
    cout << "Enter Quantity: ";
    cin >> item.quantity;
    cout << "Enter Price: ";
    cin >> item.price;


    file << item.name << " " << item.quantity << " " << item.price << endl;

    cout << "Item added successfully!\n";
    file.close();
}

void Item::viewAllItems()
{
    ifstream file(FILE_NAME);
    if (!file)
    {
        cout << "No inventory file found.\n";
        return;
    }

    Item item;
    cout << "\n--- Inventory ---\n";

    while (file >> item.name >> item.quantity >> item.price)
    {
        cout << "Name: " << item.name
             << "\tQty: " << item.quantity
             << "\tPrice: $" << item.price << endl;
    }
    file.close();
}

void Item::searchItem()
{
    ifstream file(FILE_NAME);
    if (!file)
    {
        cout << "No inventory file found.\n";
        return;
    }

    char target[50];
    cout << "Enter item name to search: ";
    cin >> target;

    Item item;
    bool found = false;

    while (file >> item.name >> item.quantity >> item.price)
    {

        if (strcmp(item.name, target) == 0)
        {
            cout << "\n--- Item Found ---\n";
            cout << "Name: " << item.name
                 << "\tQty: " << item.quantity
                 << "\tPrice: " << item.price << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Item " << target << " not found in inventory.\n";
    }
    file.close();
}

int main()
{
    Item i[20];
    int last=0;
    int choice;
    do
    {
        cout << "\n1. Add Item\n2. View All Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            i[last].addItem();
            last++;
            break;
        case 2:
            i[last].viewAllItems();
            break;
        case 3:
            i[last].searchItem();
            break;
        case 4:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
    while (choice != 4);

    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
