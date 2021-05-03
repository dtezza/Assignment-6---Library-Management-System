#include <iostream>
#include <vector>
#include "Checkout.h"
#include "Client.h"
#include "Book.h"

int main() {
    bool exit = false;
    char userInput;

    int ISBN;
    string bookTitle;

    int ID;
    string clientName;

   vector<Book> books;
   vector<Client> clients;
   vector<Checkout> checkout;

    while(!exit) {
        cout << "1: Add Book"<<endl;
        cout << "2: Add Client"<<endl;
        cout << "3: Checkout Book"<<endl;
        cout << "4: View Books"<<endl;
        cout << "5: View Clients"<<endl;
        cout << "6: Return Book"<<endl;
        cout << "7: See checked out Books"<<endl;
        cout << "8: Delete Book"<<endl;
        cout << "9: Delete Client"<<endl;
        cout << "0: Exit"<<endl;
        cin >> userInput;

        switch(userInput) {
            case '1':
                    cout << "Enter a book title: ";
                    cin >> bookTitle;
                    cout << "Enter a book ISBN: ";
                    cin >> ISBN;
                    books.push_back(Book(bookTitle, ISBN));
                break;
            case '2':

                    cout << "Enter Clients Name: ";
                    cin >> clientName;
                    cout << "Enter Clients ID: ";
                    cin >> ID;
                    clients.push_back(Client(clientName, ID));
                    break;
            case '3':   
                cout << "Enter Clients ID: ";
                cin >> ID;
                cout << "Enter Book ISBN: ";
                cin >> ISBN;

                for(int i=0; i<clients.size() ; i++)
                {
                    if(clients[i].getClientID()==ID)
                    {
                        for (int j=0; j<books.size(); j++)
                        {
                            if(books[j].getISBN()==ISBN)
                            {
                                checkout.push_back(Checkout(books[j],clients[i]));
                                books.erase(books.begin()+j);
                            }
                            else
                            {
                                cout << "Book not found." << endl;
                            }

                        }
                        
                    }
                    else
                    {
                        cout << "Client not found."<< endl;
                    }
                    
                }
                break;

            case '4':
                for(int i = 0; i < books.size(); i++) {
                    cout << "Book: " << i+1 << endl<< "Title: " << books[i].getBookTitle() << endl<<"ISBN: " << books[i].getISBN() << endl<<endl;
                }
                break;

            case '5':
                for(int i = 0; i < clients.size(); i++) {
                    cout << "Client: " << i+1 <<endl<<"Name: " << clients[i].getClientName() << endl<< "ID: " << clients[i].getClientID() << endl<<endl;
                }
                break;
            case '6': 
                cout << "Enter the returning book ISBN: ";
                cin >> ISBN;
                for(int i=0; i<checkout.size(); i++)
                {
                    if(checkout[i].getBook().getISBN()==ISBN)
                    {
                        books.push_back(checkout[i].getBook());
                        checkout.erase(checkout.begin()+i);
                    }
                    else
                    {
                        cout << "Book not found in checkout list." <<endl;
                    }
                    
                }
        
                break;

            case '7': 
                for(int i = 0; i < checkout.size(); i++) {
                    cout << "Client Name: " << checkout[i].getClient().getClientName() << endl <<"Client ID: " << checkout[i].getClient().getClientID() << endl<< "Book title: " << checkout[i].getBook().getBookTitle()<<endl <<"Book ISBN: " << checkout[i].getBook().getISBN()<<endl << endl;
                }
                break;

            case '8': 
                cout << "Enter the book ISBN you want to delete: ";
                cin >> ISBN;
                for(int i=0; i < books.size() ; i++)
                {
                    if(books[i].getISBN() == ISBN)
                    {
                        books.erase(books.begin()+i);
                    }
                }
                break;

            case '9': 
                cout << "Enter the Client's ID you want to delete: ";
                cin >> ID;
                for(int i=0; i < clients.size() ; i++)
                {
                    if(clients[i].getClientID() == ID)
                    {
                        clients.erase(clients.begin()+i);
                    }
                }
                break;

            case '0': 
                    exit = true;
                break;
        }

    }
    return 0;
}