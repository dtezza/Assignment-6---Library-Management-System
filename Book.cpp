#include "Book.h"

Book::Book() {
    bookTitle = "";
    ISBN = -1;
}

Book::Book(string bookTitle, int ISBN) {
    this->bookTitle = bookTitle;
    this->ISBN = ISBN;
}

void Book::setBookTitle(string bookTitle) {
    this->bookTitle = bookTitle;
}

void Book::setISBN(int ISBN) {
    this->ISBN = ISBN;
}

string Book::getBookTitle() {
    return bookTitle;
}

int Book::getISBN() {
    return ISBN;
}
