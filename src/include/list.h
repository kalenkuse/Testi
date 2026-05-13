#include <iostream>
#include <vector>
using namespace std;

class List
{
    private:
    protected:
    public:
    // Constructor
    List();

    // Destructor
    ~List();
    
    vector<string> list;
    string NAME;

    void printMenu();
    void printList();
    void addItem();
    void deleteItem();
};