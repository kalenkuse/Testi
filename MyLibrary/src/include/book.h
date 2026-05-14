// Book-class represents one book,
// which it manages.

#include <string>
using namespace std;

enum class ReadingStatus {wantToRead,
                          currentlyReading,
                          finishedReading,
                          stoppedReading};

class Book
{
    public:

    // Constructor
    Book (const string& author,
          const string& title,
          unsigned int pageCount,
          unsigned int year,
          const string& fsbn);

    // Destructor
    virtual ~Book ();

    // Getters
    string getAuhtor ();
    string getTitle ();
    unsigned int getPageCount ();
    unsigned int getYear ();
    string getFsbn ();

    // Setters
    bool setYear (unsigned int year);
    bool setFsbn (string fsbn);

    private:

    // Variables
    string author_;
    string title_;
    unsigned int pageCount_;
    unsigned int year_ = 0;
    string fsbn_ = "";

    // States
    ReadingStatus status_;
};