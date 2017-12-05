//do-while-loops
#include <iostream>
using namespace std;
int main()	{

/*	int value=7;

	do {
		cout<<"Hello"<<endl;
	} while(value<5);
*/
	const string password="passlock";

	string input;
	
	do {
		cout<<"Enter your password:"<<endl;
		cin>>input;

		if(input!=password) {
			cout<<"Access denied."<<endl;
		}

	} while(input!=password);

	return 0;
}