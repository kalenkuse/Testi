#include "include/list.h"

List::List()
{
}

List::~List()
{
}

void List::printMenu()
{
    int choice;

    cout << "*********************************" << endl;
    cout << " 1 - Print list." << endl;
    cout << " 2 - Add to list." << endl;
    cout << " 3 - Delete from list." << endl;
    cout << " 4 - Quit." << endl;
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if (choice == 4)
    {
        return;
    }
    else if (choice == 2)
    {
        addItem();
    }
    else if (choice == 3)
    {
        deleteItem();
    }
    else if (choice == 1)
    {
        printList();
    }
    else
    {
        cout << "Sorry choice not implemented yet" << endl;
    }

}

void List::addItem()
{
    cout << endl << endl << endl;
    cout << "*** Add Item ***" << endl;
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successffully added an item to the list!"
         << endl << endl << endl;
    cin.clear();

    printMenu();
}

void List::deleteItem()
{
    cout << endl << endl << endl;
    cout << "*** Delete Item ***" << endl;
    cout << "Select an item index number to delete" << endl;

    if (list.size())
    {
        for (unsigned int index = 0; index < list.size(); ++index)
        {
            cout << index << ": " << list[index] << endl;
        }
    }
    else
    {
        cout << "No items to delete" << endl;
    }

    int itemIndex;
    cin >> itemIndex;

    vector<string>::iterator it = list.begin() + itemIndex;

    if (it != list.end())
    {
        list.erase(it);
        cout << "Successffully deleted an item to the list!"
         << endl << endl << endl;
    }
    else
    {
        cout << "Could not find item to delete!" << endl;
    }

    cin.clear();

    printMenu();
}

void List::printList()
{
    cout << endl << endl << endl;
    cout << "*** Printing list ***" << endl;

    for (unsigned int index = 0; index < list.size(); ++index)
    {
        cout << " * " << list[index] << endl;
    }

    printMenu();
}