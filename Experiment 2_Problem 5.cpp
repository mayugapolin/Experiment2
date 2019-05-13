#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int counter, counter1, counter2 = 0, counter3 = 1, N = 22;
	cout << "---------------------------------------------------------" <<endl;
	cout << "                    Fibonacci Sequence                   " << endl;
	cout << "---------------------------------------------------------" <<endl;
	cout << "" << endl; 
	for (counter = 0; counter < N; counter++)
	{
		if (counter <= 1)
			counter1=counter;
			
		else
		{
			counter1 = counter2 + counter3;
			counter2 = counter3;
			counter3 = counter1;
		}
		cout << counter1 << ", ";
	}
	
	_getch();
	return 0;
}