#include<iostream>
using namespace std;
int main(){
//	int a;
//	a=10;
//	int *b=&a;
//	cout<<b<<" "<<b+1<<endl;
//	cout<<b+2;
	int a[5];
	int *x=&a[0];
	for(int i=0;i<6;i++){
		cout<<&a[i]<<endl;
	}
	return 0;
}