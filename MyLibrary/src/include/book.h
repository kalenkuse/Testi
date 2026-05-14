// Book-class represents one book,
// which it manages.

#include <string>
using namespace std;

enum class ReadingStatus {wantToRead,
                          currentlyReading,
                          finishedReading,
                          stoppedReading};

unsigned int MIN_YEAR = 1000;
unsigned int MAX_YEAR = 9999;

unsigned int ISBN_LENGTH_OLD = 10;
unsigned int ISBN_LENGTH = 13;

class Book
{
    public:

    // Constructor
    Book (const string& author,
          const string& title,
          unsigned int pageCount,
          unsigned int year,
          const string& isbn);

    // Destructor
    virtual ~Book ();

    // Getters
    string getAuthor ();
    string getTitle ();
    unsigned int getPageCount ();
    unsigned int getYear ();
    string getIsbn ();

    // Setters
    bool setYear (unsigned int year);
    bool setIsbn (string isbn);

    void changeStatus (ReadingStatus status);

    private:

    // Variables
    string author_;
    string title_;
    unsigned int pageCount_;
    unsigned int year_ = 0;
    string isbn_;

    // States
    ReadingStatus status_;
};