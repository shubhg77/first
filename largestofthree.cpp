#include<iostream>
using namespace std;
int main()
{
	int x,y,z;

	cout<<"find the largest value of three"<<endl;
	cout<<"enter the three numbers"<<endl;
	cin>>x>>y>>z;
	if((x>y)&&(x>z))
	{
		cout<<"x is largest"<<endl;
	}
	else if((y>x)&&(y>z)){
		cout<<"y is largest";
		
	}
	else
	{
		cout<<"z is largest";
	}
	return 0;
}
	
