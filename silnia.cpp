#include <iostream>

using namespace std;
int main()
{
	//liczenie silni
	cout << "Wprowadz liczbe \n>";
	
	int liczba, silnia=1;
	cin >> liczba;
	cout << "\n silnia liczby " << liczba << endl;
	if (liczba==0)
	cout << "Silnia z 0 to 1!" << endl;
	if (liczba==1)
	cout << "Silnia z 1 to 1!"<< endl;
	if (liczba>=2)
	{	while(true)
		{
			silnia=silnia*liczba;
			liczba--;
			if (liczba==1)
			{
				cout << "silnia liczby " << silnia ;
				break;
			}
		}
	}
	getchar();
	return 0;
}
