#include <iostream>
using namespace std;
int main()
{
	int value1=5;
	int value2=4;

	if(value1>=3) {
	cout<<"Condition 1:True"<<endl;
	}
	else{
	cout<<"Condition 1:False"<<endl;
	}

	if(value1==5 && value2<8) {
	cout<<"Condition 2:True"<<endl;
	}
	else{
	cout<<"Condition 2:False"<<endl;
	}

	if(value1==3 || value2>=3) {
	cout<<"Condition 3:True"<<endl;
	}
	else{
	cout<<"Condition 3:False"<<endl;
	}

	if((value2 !=100 && value1 ==6) || value1==5) {
	cout<<"Condition 4:True"<<endl;
	}
	else{
	cout<<"Condition 4:False"<<endl;
	}
//Storing statement in bool variables to reduce complexity
	bool condition1= (value2 !=100) && (value1 ==6);
	cout<<condition1<<endl;

	bool condition2=(value1==5);
	cout<<condition2<<endl;

	if(condition1 || condition2) {
	cout<<"Condition 5:True"<<endl;
	}
	else{
	cout<<"Condition 5:False"<<endl;
	}

	return 0;
}