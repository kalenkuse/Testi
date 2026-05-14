#include "include/book.h"

Book::Book(const string& author, const string& title,
          unsigned int pageCount, unsigned int year,
          const string& isbn) :
    author_(author), title_(title),
    pageCount_(pageCount), year_(year),
    isbn_(isbn) 
{}        

Book::~Book()
{}

string Book::getAuthor ()
{
    return author_;
}

string Book::getTitle ()
{
    return title_;
}

unsigned int Book::getPageCount ()
{
    return pageCount_;
}

unsigned int Book::getYear ()
{
    return year_;
}

string Book::getIsbn ()
{
    return isbn_;
}

bool Book::setYear (unsigned int year)
{
    if (year < MIN_YEAR or year > MAX_YEAR)
    {
        return false;
    }
    year_ = year;
    return true;
}

bool Book::setIsbn (string isbn)
{
    if (isbn.size() != ISBN_LENGTH and
        isbn.size() != ISBN_LENGTH_OLD)
    {
        return false;
    }
    isbn_ = isbn;
    return true;
}

void Book::changeStatus (ReadingStatus status)
{
    status_ = status;
}