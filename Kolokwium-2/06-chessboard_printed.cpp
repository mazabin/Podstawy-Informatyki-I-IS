//Program rysujacy szachownice. Uzytkownik nie moze wybrac z czego rysowana jest szachownica.
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int szachownica[8][8];
	int white=32, black=219;
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
getchar();
return 0;
}
