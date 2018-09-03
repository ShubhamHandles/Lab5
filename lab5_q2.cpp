//Q.2. Write a C++ program to find maximum between three numbers. 

#include<iostream>
using namespace std;
int main(){
	
	//declare variables
	float a,b,c;
	//ask for input
	cout << "Type your first number" << endl;
	cin >> a;
	cout << "Type your second number" << endl;
	cin >> b;
	cout << "Type your third number" << endl;
	cin >> c;
	//put conditions and give output
	if (a>b and a>c){
		cout << a << " is greater than " << b << " and " << c << endl;}
	else if (b>a and b>c){
		cout << b << " is greater than " << a << " and " << c << endl;}
	else {
		cout << c << " is greater than " << a << " and " << b << endl;}
	return 0;
}
	
