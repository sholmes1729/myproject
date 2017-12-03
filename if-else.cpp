#include <iostream>
using namespace std;

int main()
{
	cout<<"1.\tAdd new record."<<endl;
	cout<<"2.\tDelete record."<<endl;
	cout<<"3.\tView Record."<<endl;
	cout<<"4.\tQuit."<<endl;

	cout<<"Enter your choice:"<<flush;
	int choice;
	cin>>choice;

	if(choice==1)
	{
		cout<<"You want to add a record."<<endl;
	}
	else if(choice==2)
	{
		cout<<"You want to delete a record."<<endl;
	}
	else if(choice==3)
	{
		cout<<"You want to view a record."<<endl;
	}
	else if(choice==4)
	{
		cout<<"You want to quit."<<endl;
	}
	else
	{
		cout<<"Wrong choice."<<endl;
	}

return 0;
}