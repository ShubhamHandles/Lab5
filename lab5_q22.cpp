//Q.22. Write a C++ program to print all natural numbers from 1 to n. - using while loop 

#include<iostream>
using namespace std;
int main(){
	cout << "HELLO!" << endl;
	//define variables
	int a , n ;
	a=1;
	//ask for input
	cout << "Type the last number of your natural number list" << endl;
	cin >> n;
	//create loop
	while (a <= n){
		cout << a << ",";
		a++;
		}
	return 0;
}
