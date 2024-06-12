#include<iostream>
using namespace std;
int main(){
	cout<<"Input four integers a,b,c and d:"<<endl;
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cout<<(a>b && c<d)<<endl;
	cout<<(a>b || c<d)<<endl;
}