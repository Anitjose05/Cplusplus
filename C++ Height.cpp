#include<iostream>
using namespace std ;
int main ()
{
	float m,cm ;
	float inch;
	int feet;
	cout<< "Enter the height in m:";
	cin>>m;
	cout<<" Enter the height in cm:";
	cin>>cm;
    inch=cm/2.54;
	feet=inch/12;
	cout<<feet<<"feet and "<<inch<<"inch:";
	return 0;
}
