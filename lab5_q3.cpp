//Q.3. Write a C++ program to check whether a number is negative, positive or zero. 

#include<iostream>
using namespace std;
int main(){
	cout << "Hello! we determine whether a number is negative, positive or zero" << endl;
	
	//define variable
	float a;
	//ask for input
	cout << "Give your number..." << endl;
	cin >> a;
	//write conditions and print
	if (a>0){ 
		cout << "Your number is POSTIVE!" << endl;
	}
	else if (a<0){
		cout << "Your number is NEGATIVE!" << endl;	
	}
	else {
		cout << "Your number is ZERO!" << endl;	 	
	}
	return 0;
}
