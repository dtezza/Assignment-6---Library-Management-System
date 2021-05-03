#include "Client.h"
#include "Book.h"

using namespace std;

class Checkout {
    private:
        Book book;
        Client client;
    public:
        Checkout(Book book, Client client);

        void setBook(Book book);
        Book getBook();

        void setClient(Client client);
        Client getClient();
};


