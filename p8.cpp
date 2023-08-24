#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int km,m,cm,in,ft;
	 cout<<"tanya A. sumra"<<endl;
	 cout<<"220130318009"<<endl;
	 cout<<"Enter value in km for converting::";
	 cin>>km;
	 
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*1000<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*10000<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*39370.1<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*3280.84<<endl;
}
