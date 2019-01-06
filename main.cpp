//
// Created by Fabiano Tarlao on 12/10/18.
// Released under GPL3 License
//#include <iostream>

#include "network/Url.h"
int main() {
    Url url1 = Url();
    std::cout << "Test Url parse" << std::endl;
    string prova = string("http://jack@server.com:8080/path/to/resource?a=1#2");
    Url url = Url(prova);
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    url.update("http://mark@server.com:8080/path/to/resource?a=1#2");
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    return 0;
}