//arrays-prac
#include <iostream>
using namespace std;
int main() {
/*
	int table[10];

	int a=0;

	int m;

	for(int i=1; i<11; i++) {

		m=12*i;

		table[a]=m;

		a++;
		if(a==10) {
			break;
		}	

	}

	for(int z=0; z<10; z++) {

		cout<<table[z]<<endl;

	}

	return 0;
}

*/

//Alternative

int TWELVE_TABLE[13];
int MULTI = 12;

for (int i = 0; i < 13; i++)
{
     TWELVE_TABLE[i] = i * MULTI;
     std::cout << TWELVE_TABLE[i] << std::endl;
}
}
