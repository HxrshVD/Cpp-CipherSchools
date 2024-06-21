//#include<iostream>
//using namespace std;
//void swap(int *x,int *y){
//	int c;
//	c=*x;
//	*x=*y;
//	*y=c;
//	cout<<"The swapping is completed."<<endl;
//}
//int main(){
//	int a,b;
//	a=3;
//	b=4;
//	swap(&a,&b);
//	cout<<"Value of a and b after swapping are: "<<a<<" "<<b<<endl;
//	return 0;
//}

#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};
    
    printArray(myArray, size);
    
    int sum = sumArray(myArray, size);
    cout << "Sum of array elements is: " << sum << endl;
    
    return 0;
}
