//multi-dimensional arrays
#include <iostream>
using namespace std;
int main() {

	string animals[2][3] = {	                 //2 is the number of indexes while 3 is the number of elements
			{"fox","dog","cat"},                 //index 0
			{"mouse","squirrel","parrot"}        //index 1
	};

	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {

			cout<<animals[i][j]<<"   "<<flush;
		}
		cout<<endl;
	}

	return 0;
}