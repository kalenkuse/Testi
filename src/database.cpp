#include "include/database.h"

void Database::write(const vector<string>& list)
{
    ofstream db;
    db.open("db/lists.sl");

    if (db.is_open())
    {
        for (unsigned int index = 0; index < list.size(); ++index)
        {
            db << list[index] << endl;
        }
    }
    else
    {
        cout << "ERROR: File open for WRITE failed!" << endl;
    }

    db.close();
}

void Database::read()
{
    string line;

    ifstream db;
    db.open("db/lists.sl");

    if (db.is_open())
    {
        while(getline(db, line, '\n'))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "ERROR: File open for READ failed!" << endl;
    }

    db.close();
}