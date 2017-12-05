#include <iostream>
using namespace std;
int main()
{

/*	for(int i=0; i<5; i++) {
		cout<<"i is:"<<i<<endl;

		if(i==3) {
			break;
		}	
		cout<<"You shouldn't see this."<<endl;
	}

	cout<<"Quitting..."<<endl;

	return 0;
}
*/

/*
for(int i=0; i<5; i++) {
		cout<<"i is:"<<i<<endl;

		if(i==3) {
			continue;
		}	
		cout<<"You should see this."<<endl;
	}
cout<<"Quitting."<<endl;
*/


	const string password="passlock";

	string input;
	
	do {
		cout<<"Enter your password:"<<endl;
		cin>>input;

		if(input==password) {
			break;
		}
		else {
			cout<<"Access denied."<<endl;
		}

	} while(input!=password); //or while(true)

cout<<"Quitting..."<<endl;

}