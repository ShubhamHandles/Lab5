//Q.1. Write a C++ program to find maximum between two numbers. 

#include<iostream>
using namespace std;
int main(){
	
	//declare variables
	float a,b;
	//ask for input
	cout << "Type your first number" << endl;
	cin >> a;
	cout << "Type your second number" << endl;
	cin >> b;
	//put conditions and give output
	if (a>b){
		cout << a << " is greater than " << b << endl;
		}
	else {
		cout << b << " is greater than " << a << endl;
		}
	return 0;
	
}
