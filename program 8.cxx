#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,muli,first,second,add;
	char dummychar='/';
	cout << "Enter 1st fraction = ";
	cin  >> a  >> dummychar >> b;
	cout << "Enter 2nd fraction =";
	cin >> c >> dummychar >> d;
	muli=b*d;
	first = muli/b*a;
	second = muli/d*c;
	add=first + second;
	cout <<add << "/" << muli;
	return 0;
}