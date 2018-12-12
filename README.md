# C++ URL parser
The class ```Url``` parses the provided raw URL into its components

*protocol://username@domain:port/path?query#fragment*

The URL string may be a ```char[]```, ```string```. You can also instantiate an empty ```Url``` class and update 
the represented URL later with the ```update(string)``` command.

The main.cpp is a good exmaple:
```
int main() {
    std::cout << "Test Url parse" << std::endl;
    Url url = Url("http://jack@server.com:8080/path/to/resource?a=1#2");
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    url.update("http://mark@server.com:8080/path/to/resource?a=1#2");
    std::cout << "Username: " << url.username << " Domain: " << url.domain << "\nand so on..\n";
    return 0;
}
```
