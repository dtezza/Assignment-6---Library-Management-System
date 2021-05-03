#include "Client.h"

Client::Client() {
    clientName = "";
    ID = -1;

}

Client::Client(string clientName, int ID) {
        this->clientName = clientName;
        this->ID = ID;
}

void Client::setClientName(string clientName) {
    this->clientName = clientName;
}

void Client::setClientID(int ID) {
        this->ID = ID;
}

string Client::getClientName() {
    return clientName;
}

int Client::getClientID() {
    return ID;
}
