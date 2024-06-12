#include <iostream>  // Required for std::cout
#include <string>    // Required for std::string

int main() {
    // Variable declarations and initializations
    int myInt = 10;
    char myChar = 'A';
    float myFloat = 3.14f;
    double myDouble = 3.14159;
    bool myBool = true;
    std::string myString = "Hello, World!";
    
    // Outputting the variables
    std::cout << "Integer: " << myInt << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Boolean: " << std::boolalpha << myBool << std::endl;  // std::boolalpha to print "true" or "false"
    std::cout << "String: " << myString << std::endl;
    
    return 0;
}
