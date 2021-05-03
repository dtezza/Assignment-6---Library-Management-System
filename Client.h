#ifndef CLIENT_H
#define CLIENT_H
#include <string>

using namespace std;

class Client {
    private:
        string clientName;
        int ID;
    public:
        Client();
        Client(string clientName, int ID);
        void setClientName(string clientName);
        void setClientID(int ID);
        string getClientName();
        int getClientID();
};

#endif