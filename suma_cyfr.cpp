// zliczanie sumy cyfr w liczbie
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int liczba, suma_cyfr=0, x;
	cout << "Podaj liczbe:\n>";
	cin >> liczba;
	while(liczba)
	{
		x=liczba%10;
		suma_cyfr=x+suma_cyfr;
		liczba=liczba/10;
	}
	cout << suma_cyfr;
	getch();
	return 0;
}
