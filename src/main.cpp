#include "include/list.h"
#include "include/database.h"

int main(int argCount, char* args[])
{
    List simpleList;
    Database data;
        
    if (argCount > 1)
    {
        simpleList.NAME = string(args[1]);
        simpleList.printMenu();
        data.write(simpleList.list);
        data.read();
    }
    else
    {
        cout << "Username not supplied!" << endl;
    }

    return 0;
}