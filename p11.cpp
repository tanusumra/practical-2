#include<iostream>
using namespace std;

int &instance();
int a=10;

int main()
{
	cout<<a<<endl;
	instance()=5;
	cout<<a;
	return 0;
}
int &instance()
{
	return a;
}
