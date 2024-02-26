#include<iostream>
using namespace std;
int main()
{
	float celsius;
	float fahrenheit;
	cout << "Enter temperature in celsiu=";
	cin >> celsius;
	fahrenheit = ( celsius *9/5)+32;
	cout << "Temperature in fahrenheit=" << fahrenheit;
	return 0;
}