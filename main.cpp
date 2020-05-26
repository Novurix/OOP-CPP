#include <iostream>
using namespace std;

// Class
class Client {

    public:
        int id;
        string name;

        // Constructor
        Client(string _name, int _id) {
            name = _name;
            id = _id;

            cout << _name << " " << id << endl;
        }
};


int main() {
    Client mainOOP("Test",20);
}
