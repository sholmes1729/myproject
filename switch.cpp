#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	const int value = 4;

	const int number =4;

	switch(value) {
	case 1:
		cout<<"Value is 4." << endl;
		break;
	case 5:
		cout<<"Value is 5." << endl;
		break;
	case number:
		cout<<"Value is 6." << endl;		//Don't use variables.
		break;
	default:
	cout<<"Unrecognised value."<<endl;
	}	

	return 0;
}