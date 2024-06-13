#include<iostream>
using namespace std;
int sum(int a,int  b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int a,b;
	a=10;
	b=20;
	int add_sum;
	add_sum=sum(a,b);
	cout<<"Sum of a and b is "<<add_sum<<endl;
	return 0;
}