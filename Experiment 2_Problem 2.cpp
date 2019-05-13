#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()

{ 
	int GALLON, BALANCE;
	
	cout << "      ------------------------------   " << endl;
	cout << "           WATER BILL E-RECEIPT        " << endl;
	cout << "      ------------------------------   " << endl;
	cout << "" << endl;

	cout << "Amount of Gallons Used:  "; cin >> GALLON;
	cout << "Unpaid Balance Amount\n Note: There is P20 charge for Late Payers:  PHP"; cin >> BALANCE;
	cout << "Consumption Charge: PHP" << GALLON*1.10 << endl;
	cout << "Water Demand Charge:  PHP 35" << endl;
	cout << "" << endl;

	if (BALANCE > 0) 
		cout << "Water Bill Amount:  PHP" << 35 + 20 + (GALLON*1.10) + BALANCE << fixed << showpoint << setprecision(2);
	else
		cout << "Water Bill Amount:  PHP" << 35 + (GALLON*1.10) + BALANCE << fixed << showpoint << setprecision(2);

	_getch();
	return 0;

}