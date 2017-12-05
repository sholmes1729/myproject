//printing table using multidimensional arrays
#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
 	cout<<"Enter the number of rows and columns of your table: "<<endl;
 	cin>>a;
 	cin>>b;

 	int table[a][b];

 	for(int i=0;i<a;i++) {

 		for(int z=0;z<b;z++) {

 			table[i][z]=(i+1)*(z+1);

 			cout<<"   "<<table[i][z]<<flush;
 		}
 		cout<<endl;
 	}

	return 0;		
}