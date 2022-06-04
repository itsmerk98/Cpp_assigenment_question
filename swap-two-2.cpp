#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter the for a  = ";
	cin>>a;
	cout<<"Enter the for b  = ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"after swap"<<endl;
	cout<<"The value of a is = "<<a<<endl;
	cout<<"The value of b is = "<<b;
	return 0;
}

