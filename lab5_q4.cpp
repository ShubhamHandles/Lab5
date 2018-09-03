//Q.4. Write a C++ program to check whether a number is divisible by 5 and 11 or not.

#include<iostream>
using namespace std;
int main(){
	cout << "Hello! check whether a number is divisible by 5 and 11 or not" << endl;
	
	//define variable
	int a;
	//ask for input
	cout << "Give your number..." << endl;
	cin >> a;
	//write conditions and print
	if (a%55==0){
		cout << "Your number is divisible by 5 and 11!" << endl;
	}
	else {
		cout << "Your number is not divisible by 5 and 11!" << endl;
	}
	return 0;
}
