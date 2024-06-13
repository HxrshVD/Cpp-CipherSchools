#include <iostream>
int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    
    int num1, num2, num3;
    
    std::cout << "Enter three integers: "<<std::endl;
    std::cin >> num1 >> num2 >> num3;
    
    int greatest = findGreatest(num1, num2, num3);
    
    std::cout << "The greatest number is: " << greatest << std::endl;
    
    return 0;
}
