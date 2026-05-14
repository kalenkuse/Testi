#include "include/list.h"

/**
 * Muokkaillaan muokkaillaan testicommitin vuoksi
 * Muokkaillaan vähän lisää 
 */

int main(int argCount, char* args[])
{
    if (argCount > 1)
    {
        List simpleList;
        simpleList.NAME = string(args[1]);
        simpleList.printMenu();
    }
    else
    {
        cout << "Username not supplied! Exiting..." << endl;
    }
    return 0;
}