#include <iostream>

int main() {
    
    int myArray[5] = {1, 2, 3, 4, 5};
    
    std::cout << "Array elements are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
