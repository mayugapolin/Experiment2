#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
	
	int price, time;
	char package;

	const int PackageA = 995;
	const int PackageB = 1495;
	const int PackageC = 1995;

	cout << "---------------------------------------------------------------------------------------" <<endl;
	cout << " Package A - 10 Hours of Access for PHP 995/month. Beyond 10 hours - Add PHP 20/hr.\n";
	cout << " Package B - 20 Hours of Access for PHP 1495/month. Beyond 20 hours - Add PHP 10/hr.\n";
	cout << " Package C - UNLIMITED Access for PHP 1995/month.\n";
	cout << "---------------------------------------------------------------------------------------";
	cout <<"" << endl;
	cout <<"" << endl;

	cout << "Enter Package Subscription:   "; 
	cin >> package;
	
	switch(package)
	{
		case 'a':
		case 'A':
			
			cout << "Input Additional Hours Used: "; 
			cin >> time; 
			
			cout << "Total Monthly Fee: ";
			price = PackageA + (time*20);
			cout << price << "PHP ";
			break;
		
		case 'b':
		case 'B':
			cout << "Input Additional Hours Used: "; 
			cin >> time; 
			
			cout << "Total Monthly Fee: ";
			price = PackageB + (time*10);
			cout << price << "PHP ";
			break;
		
		case 'c':
		case 'C':
			cout << "Total Monthly Fee: ";
			cout << "PHP 1995";
			break;
			
		default:
			cout << "Input: INVALID";
	}
		_getch();
		return 0;
}