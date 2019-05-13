#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	
	cout << "Counting...   " << endl;
	cout << "" << endl; 

	int counter = 1;

		for (counter=1;counter<=10;counter++)
	{
		cout << counter << ", ";
		if (counter==11) break;
	}
	for (counter=12;counter<=30;counter+=2)
	{
		cout << counter << ", "; 
		if (counter==32) break;
	}
_getch();
return 0;
}