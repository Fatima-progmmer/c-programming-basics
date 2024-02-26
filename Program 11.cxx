#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(8) << "Last name " << setw(8) << " First name" << setw(8)<<"  Street address" << setw(8) << " Town" << setw(8) << "          State";
	cout << "\n------------------------------------------------------------" << endl;
	
	cout << "Jones" << setw(8) << "      Bernord" << setw(8) << "     109 Pine Lane" << setw(8) << "     Littletown" << setw(8) << "MI"  <<endl;
	
	cout << "O'Brian" << setw(8) << "    Coleen" << setw(8) << "      42 E. 99th Ave." << setw(8) << "   Bigcity" << setw(8) << "         NY"  <<endl;
	
		cout << "Wong" << setw(8) << "       Harry" << setw(8) << "       121.A Alabama St." << setw(8) << " Lakeville" << setw(8) << "       IL"  <<endl;
	
	return 0;
	}