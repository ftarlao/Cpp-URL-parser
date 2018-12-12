#include <iostream>
#include "network/Url.h"
int main() {
    std::cout << "Test Url parse" << std::endl;
    Url url = Url("http://jack@server.com:8080/path/to/resource?a=1#2");
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    url.update("http://mark@server.com:8080/path/to/resource?a=1#2");
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    return 0;
}