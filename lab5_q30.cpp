//Q.30. Write a C++ program to print multiplication table of any number. 

#include <iostream>
using namespace std;

int main() {
	cout<< "Hello" << endl;
        //define variables
	int a, b, n;
	a=1;
	//ask input
	cout << "Type the number you want multiplication table for" << endl;  
	cin >> b;
	while (a<=11) {
		cout <<  n  << endl;
		n=a*b;
		++a;
	}
	return 0;
}
