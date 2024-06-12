#include <iostream>
using namespace std;
int main() {
    
    int myArray[5] = {1, 2, 3, 4, 5};
    
    std::cout << "Array elements are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    cout<<endl;
    for (int i = 4; i >= 0; --i) {
        std::cout << myArray[i] << " ";
    }
    
    return 0;
}
