#include <iostream>
using namespace std;

int main() {
	
//    int marks;
//    
//    std::cout << "Enter the student's marks: ";
//    std::cin >> marks;
//    char grade;
//    
//    if (marks >= 90 ) {
//        grade = 'A';
//    } else if (marks >= 80 ) {
//        grade = 'B';
//    } else if (marks >= 70 ) {
//        grade = 'C';
//    } else if (marks >= 60 ) {
//        grade = 'D';
//    } else if (marks >= 0 ) {
//        grade = 'F';
//    } else {
//        std::cout << "Invalid marks entered. Please enter marks between 0 and 100." << std::endl;
//        return 1;
//	}
//    
//    std::cout << "The grade is: " << grade << std::endl;
//    
//    return 0;
//	int a,b,c,d;
//	cin>>a;
//	cin>>b;
//	cin>>c;
//	cin>>d;
//	if(a>b && c>d){
//		cout<<"haha";
//	}
//	else if(a>b && c<d){
//		cout<<"hehe";
//	}
//	else if(a<b && c>d){
//		cout<<"hoho";
//	}
//	else{
//		cout<<"huhu";
//	}
//	return 0;
	int a;
	cout<<"Enter a: ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"Value of a is 1";
			break;
		case 2:
			cout<<"Value of a is 2";
			break;
		default:
			cout<<"Default value will be printed";
			break;
	}
	return 0;
}
