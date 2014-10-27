#include <iostream>
#include <conio.h>

using namespace std;

bool pierwsza(int a)
{
	for (int i=a-1; i>1; i--)
		if(!a%i)
			return false;	

	return true;
}

int main()
{
	int a;
	cout << "Podaj liczbe do sprawdzenia:\n";
	cin >> a;
	
	cout << (pierwsza(a) ? "true" : "false") << endl;
	
	getch();
	return 0;
}
