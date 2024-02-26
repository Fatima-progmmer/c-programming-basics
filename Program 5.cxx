#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char chara;
	cout << "Enter a character = ";
	cin >> chara;
	if(chara=tolower(chara));
	{
	cout << "1";
	}
	if(chara!=tolower(chara));
	{
	cout << "0";
	}
}