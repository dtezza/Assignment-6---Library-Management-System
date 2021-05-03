#include "Checkout.h"

Checkout::Checkout(Book book, Client client) {
    this->book=book;
    this->client=client;
}

void Checkout::setBook(Book book) {
     this->book=book;
}

Book Checkout::getBook() {
    return book;
}

void Checkout::setClient(Client client) {
    this->client = client;
}

Client Checkout::getClient() {
    return client;
}