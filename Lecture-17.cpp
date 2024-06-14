#include<iostream>
using namespace std;
void Hello(){
	cout<<"Hello!!!"<<endl;
}
int sum(int a,int b){
	int c;
	c=a+b;
	a=500;
	cout<<"The value of c is "<<c<<endl;
	return c;
}
int main(){
	Hello();
	int a,b;
	int c;
	c=75;
	a=4;
	b=6;
	int d;
	d=sum(a,b);
	cout<<"The value of c is "<<c<<endl;
	return 0;
}