#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{
    private:
    protected:
    public:
    vector<string> list;
    string NAME;

    void write(const vector<string>& list);
    void read();
};