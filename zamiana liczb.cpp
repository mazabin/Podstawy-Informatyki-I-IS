//zamiana liczby binarnej na dziesietna i dziesietnej na binarna
//zamiana miejscami cyfr w liczbie
#include <iostream>
#include <conio.h>
#include <stdint.h>
#include <limits>
using namespace std;

int main()
{
	unsigned short int wybor;
	int DEC, pot=1, a, b, c;
	cout << "1. DEC to BIN\n2. Odwrocenie cyfr w liczbie\n>";
	cin >> wybor;
	switch (wybor)
	{
		case 1:
			cout << "Podaj liczbe w systemie decymalnym (DEC)\n>";
			cin >> DEC;
			cout << DEC << " DEC rowna sie ";
			while(pot<DEC)
				pot*=2;
			pot/=2;
			while(pot>=1)
			{
				if(DEC>=pot)
				{
					cout << "1";
					DEC-=pot;
				}
				else
				{
					cout << "0";
				}
				pot /= 2;
			}
			cout << " BIN.";
			break;
		case 2:
			cout << "Wpisz liczbe ktora chcesz odwrocic\n>";
			cin >> a;
			cout << "Odwrocona liczba " << a << " to: ";
			while(a)
			{
				if(a<10)
				{
					cout << a;
					break;
				}
				else
				{
					b=a/10;
					c=b*10;
					cout << a%c;
					a=b;
				}
			}
			break;
		default:
			cout << "Wybor nieprawidlowy";
			break;
	}
	return 0;
} 
