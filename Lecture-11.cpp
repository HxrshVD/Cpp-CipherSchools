#include<iostream>
using namespace std;
int main(){
//	int i=1;
//	while(i<101){
//		cout<<i<<endl;
//		i++;
//	}

	int i=1;
	while(i<101){
		int a;
		cin>>a;
		if(a==65){
			cout<<"Congrats, you have guessed correctly!"<<endl;
			break;
		}
		i++;
	}
	return 0;
}