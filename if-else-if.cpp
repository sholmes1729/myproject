//If-else-if.cpp
#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter your age:"<<flush;
	int age;
	cin>>age;
	if(age<20)
	{
	cout<<"Age is Insufficient."<<endl;
	}
	else if(age>20&&age<50)
	{
	cout<<"Age is nearly sufficient."<<endl;
	}
	else if(age>50&&age<70)
	{
	cout<<"Perfect age."<<endl;
	}
	else
	{
	cout<<"Age not applicable."<<endl;
	}

	if(age<10)
	{
		cout<<"Try again:"<<endl;
	}
	return 0;
}