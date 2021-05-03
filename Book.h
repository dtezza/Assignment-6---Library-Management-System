#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    private:
        string bookTitle;
        int ISBN;
public:
    Book();
    Book(string bookTitle, int ISBN);
    void setBookTitle(string bookTitle);
    void setISBN(int ISBN);
    string getBookTitle();
    int getISBN();
};

#endif