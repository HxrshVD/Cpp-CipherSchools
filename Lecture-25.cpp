#include <iostream>

using namespace std;

void findMinMax(int arr[], int size, int &min, int &max) {
    
    min = arr[0];
    max = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    const int size = 5;
    int myArray[size] = {3, 1, 4, 1, 5};
    int min, max;
    findMinMax(myArray, size, min, max);
    
    cout << "Minimum value is: " << min << endl;
    cout << "Maximum value is: " << max << endl;
    
    return 0;
}
