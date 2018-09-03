//Q.23. Write a C++ program to print all natural numbers in reverse (from n to 1).

#include<iostream>
using namespace std;
int main(){
	cout << "HELLO!" << endl;
	//define variables
	int a,n;
	a=1;
	//ask for input
	cout << "Type the biggest number of your natural number list" << endl;
	cin >> n;
	//create loop
	while (a <= n){
		cout << n << ",";
		n--;
		}
	return 0;
}
