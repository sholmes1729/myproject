#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float value1=0.05
/*	if(value1==0.055)
	{
		cout<<"Equal."<<endl;
	}
	else {
		cout<<"Not equal."<<endl;
	}
*/
	if(value1<0.0856) {
		cout<<"equal"<<endl;
	}
	else {
		cout<<"Not equal."<<endl;
	}

	cout<<setprecision(10)<<value1<<endl;

	return 0;
}