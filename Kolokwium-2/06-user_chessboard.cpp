//Zmodyfikowana szachownica, w której uzytkownik sam wybiera czym zostaja wypelnione pola szachownicy
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int main()
{
	int szachownica[8][8];
	int white, black;
	cout << "Wprowadz z klawiatury dwie liczby, ktorymi narysujesz szachownice\n>";
	cin >> white >> black;
	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++)
		{
			if(i%2==0 && j%2==1 || i%2==1 && j%2==0)
				cout << static_cast<char>(black);
			else
				cout << static_cast<char>(white);
			if(j==7)
				cout << endl;
		}
	}
getch();
return 0;
}
