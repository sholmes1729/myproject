//arrays
#include<iostream>
using namespace std;
int main() {

	cout<<"Array of integers"<<endl;
	cout<<"================="<<endl;
	int values[3];

	values[0] = 26;
	values[1] = 27;
	values[2] = 28;

	cout<<values[0]<<endl;
	cout<<values[1]<<endl;	
	cout<<values[2]<<endl;

	cout<<endl<<"Array of doubles"<<endl;
	cout<<"================"<<endl;
	double number[5] = {44.5, 2.33, 9.12, 12.55, 65.6};

/*	cout<<number[0]<<endl;
	cout<<number[1]<<endl;
	cout<<number[2]<<endl;
	cout<<number[3]<<endl;
	cout<<number[4]<<endl;
*/
	for (int i=0; i<5; i++) {
//		number[i]=26;         Settings all elements to 26
		cout<<"Element at index: "<<i<<"   "<<number[i]<<endl;
	}

cout<<endl<<"initialising with zero values."<<endl;
cout<<"=============================="<<endl;
int numberarray[10] = {};

for(int i=0; i<10; i++)
{
	cout<<"Element at index: "<<i<<"     "<<numberarray[i]<<endl;
}

cout<<endl<<"string array"<<endl;
string texts[]= {"john", "reese", "finch"};
for(int i=0; i<3; i++)
{
	cout<<"Element at index: "<<i<<"     "<<texts[i]<<endl;
}

	return 0;
}