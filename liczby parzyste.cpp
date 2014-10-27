#include <iostream>
using namespace std;

int main ()
{
	cout << "Podaj liczbe od 1 do 100" << endl;
	int i;
	cin >> i;
	cout << "Liczby parzyste od liczby " << i << ":" << endl; 
	for (i; i<=100; i++)
	{
		if (i%2==0)
		cout << i << endl;
		
	}
	getchar();
return 0;
}
