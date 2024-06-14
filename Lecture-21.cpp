#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The value of pointer variable which stores the address of the variable 'a' is "<<b<<endl;
	cout<<"The value at the address stored in b is "<<*b<<endl;
	return 0;
}