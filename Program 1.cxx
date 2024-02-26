#include<iostream>
using namespace std;
int main()
{
	float gallons,cubic_feet;
	cout << "Enter a number of gallons=";
	cin >> gallons;
	cubic_feet=gallons/7.481;
	cout << "equivalent in cubic feet is=" << cubic_feet;
	return 0;
}