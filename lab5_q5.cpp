//Q.5. Write a C++ program to check whether a number is even or odd. 

#include<iostream>
using namespace std;
int main(){
	cout << "Hello! check whether a number is even or odd" << endl;
	
	//define variable
	int a;
	//ask for input
	cout << "Give your number..." << endl;
	cin >> a;
	//write conditions and print
	if (a%2==0 and a>0){
		cout << "Your number is even!" << endl;
	}
	else if (!(a%2==0) and a>0) {
		cout << "Your number is odd!" << endl;
	}
	else {
		cout << "Enter a positive number!" << endl;
	}
	return 0;
}
