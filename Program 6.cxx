#include<iostream>
using namespace std;
int main()
{
	int dollar;
	
	float British=1.487,Frence=0.172,German=0.584,Japanse=0.00955;
	
	cout <<"Enter dollar number=";
	cin >> dollar;
	
	cout << "In british=" << "$ " << dollar*British <<"\n";
	
	cout << "In Frence=" << "$" << Frence*dollar<< "\n";
	
	cout << "In German=" << "$" << dollar*German << "\n";
	
	cout << "In Japanse=" << "$" << dollar*Japanse << "\n";
	
	return 0;
}