#include<iostream>
#include<conio.h>
using  namespace std;
int main()
{
	int pounds,shillings,pence;
	float decpounds,decfrace,shillingfrace,pencefrace;
	
	cout <<"Enter a decimal pounds=";
	cin >>decpounds;
	
	pounds = (int)decpounds;
	decfrace = decpounds-pounds;
	shillingfrace = decfrace*20;
	shillings = (int) shillings;
	shillingfrace = shillingfrace - shillings;
	pence= shillingfrace * 12;
	
	cout <<"Equivalent in old notation =£" << pounds <<"." <<shillings << "." <<pence;
	return 0;
}