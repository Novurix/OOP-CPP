#include <iostream>

// GROUPING
class UserInformation {
private:
    std::string user;
    std::string handle;

public:

    void getUser(std::string user) {
        this->user = user;

        std::cout << this->user << std::endl; 
    }
    void getHandle(std::string handle) {
        this->handle = handle;
        std::cout << this->handle << std::endl;
    }
};

bool hasHandle;
UserInformation usr;

void getInput() {

    if (!hasHandle) { std::cout << "enter your handle: "; }

    else { std::cout << "enter your username: "; }

    std::string input;
    std::cin >> input;

    if (!hasHandle) {

        usr.getHandle(input);
        hasHandle = true;

        getInput();
    }
    else { 
        usr.getUser(input);
    }
}

int main() {
    getInput();
}