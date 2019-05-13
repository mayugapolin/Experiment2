#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int number=1, sum;

	while(number=1)
{
	cout << "Enter a (+) Natural Number: ";
    cin >> number;

	if (number > 0)
		
	{
    sum = (number*(number+1)/2);
	cout << "Sum =  " << sum;
	cout <<"" <<endl;
    }
		else 
		{
		cout << "Thank You!\n";
		break;}
	}
		
	
	_getch();
    return 0;
}