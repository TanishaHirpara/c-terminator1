#include<iostream>
using namespace std;

main()
{
	int a,b;
	
	cout<<"Enter value of a = ";
	cin>>a;
	cout<<"Enter value of b = ";
	cin>>b;
	char str[] = "it cannot divide by zero ";
	
	try{
		if(b>0)
		{
			cout<<"division a/b = "<<a/b<<endl;
			
		}
		else
		{
			throw 87.47;
		}
	}
	catch(...)
	{
		cout<<str<<endl;
	}
}
