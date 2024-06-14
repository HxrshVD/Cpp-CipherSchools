#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	int c=20;
	int *d=&c;
	int e;
	e=*b+*d;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The value of pointer variable which stores the address of the variable 'a' is "<<b<<endl;
	cout<<"The value at the address stored in b is "<<*b<<endl;
	cout<<"The value of c is "<<c<<endl;
	cout<<"The address of c is "<<&c<<endl;
	cout<<"The value of pointer variable which stores the address of the variable 'c' is "<<d<<endl;
	cout<<"The value at the address stored in d is "<<*d<<endl;
	cout<<"The sum of *b and *d is "<<e<<endl;
	return 0;
}