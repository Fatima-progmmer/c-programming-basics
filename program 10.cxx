#include <iostream>
using namespace std;
int main()
{
	float pounds, shillings, pence;

	cout << "Enter pounds=";
	cin >> pounds;

	cout << "Enter shillings=";
	cin >> shillings;

	cout << "Enter a pence=";
	cin >> pence;

	float totalpence = (pence / (12 * 20)) + shillings / 20;
	float totalPounds = pounds + totalpence;

	cout << "Decimals pounds =£" << totalPounds;
	return 0;
}