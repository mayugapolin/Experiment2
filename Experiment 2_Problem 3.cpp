#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	double V,z;
	double x, y;
	char INPUT_x;
	
	cout << "--------------------------------------" <<endl;
	cout << "Input Letter of the Integer of x: \n";
	cout << "A. 1\n";
	cout << "B. 2\n";
	cout << "C. Other Values\n";
	cout << "--------------------------------------" <<endl;
	cin >> INPUT_x;
	 cout < "";

	switch (INPUT_x)
	{
		case 'a':
		case 'A':
			cout << "Integer of y? "; 
			cin >> y;
			
			if ((5 > y) > 1)
			{
				x = 1;
				z = 2.5;
				V = x*y*z;
				cout << "V = " << setprecision(2)  << fixed << showpoint << V << endl;
				std::cout << std::setw(10);
				break;
			}
			
			else if (5 <= y)
			{
				x = 1;
				z = 2.5;
				V =	x+(y/z);
				cout << "V = " << setprecision(2)  << fixed << showpoint << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
		case 'b':
		case 'B':
			cout << "Integer of y?  "; 
			cin >> y;
			
			if (y <=5)
			{
				x = 2;
				z = 2.5;
				V = fabs (x - y)/z;
				cout << "V = " << setprecision(2)  << fixed << showpoint << V << endl;
				std::cout << std::setw(10);
				break;
			}
			
			else if (y > 5)
			{
				x = 2;
				z = 2.5;
				V = x - sqrt(y + z);
				cout << "V = " << setprecision(2)  << fixed << showpoint << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
		case 'c':
		case 'C':
			{
				z = 2.5;
				cout << "Integer of x? "; 
				cin >> x;
				cout << "Integer of y? "; 
				cin >> y;
				V = x + y + z;
				cout << "V = " << setprecision(2)  << fixed << showpoint << V << endl;
				std::cout << std::setw(10);
				break;
			}
		
	}
	_getch();
	return 0;
}